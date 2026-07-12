/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   select_intermedio.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 16:06:53 by francysa          #+#    #+#             */
/*   Updated: 2026/07/10 17:13:42 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	indice_max_stack_b(t_stack *stack_b)
{
	int	max;

	if (!stack_b)
		return (-1);
	max = stack_b->index;
	while (stack_b != NULL)
	{
		if (stack_b->index > max)
			max = stack_b->index;
		stack_b = stack_b->next;
	}
	return (max);
}

static int	posicion_indice(t_stack *stack, int indice_max)
{
	int	pos;

	pos = 0;
	while (stack != NULL)
	{
		if (stack->index == indice_max)
			return (pos);
		pos++;
		stack = stack->next;
	}
	return (-1);
}

static void	rotate_and_push(t_stack **sa, t_stack **sb, int pos_arriba,
				int pos_abajo, t_bench *bench)
{
	int	size_a;
	int	coste_rra;

	size_a = ft_lstsize_t(*sa);
	if (pos_arriba <= (size_a - pos_abajo))
	{
		while (pos_arriba-- > 0)
			ra(sa, bench);
	}
	else
	{
		coste_rra = size_a - pos_abajo;
		while (coste_rra-- > 0)
			rra(sa, bench);
	}
	pb(sa, sb, bench);
}

static void	push_back_to_a(t_stack **stack_a, t_stack **stack_b, t_bench *bench)
{
	int	size_b;
	int	pos_max;
	int	indice_max;
	int	coste_rrb;

	while (*stack_b != NULL)
	{
		size_b = ft_lstsize_t(*stack_b);
		indice_max = indice_max_stack_b(*stack_b);
		pos_max = posicion_indice(*stack_b, indice_max);
		if (pos_max <= size_b / 2)
		{
			while (pos_max-- > 0)
				rb(stack_b, bench);
		}
		else
		{
			coste_rrb = size_b - pos_max;
			while (coste_rrb-- > 0)
				rrb(stack_b, bench);
		}
		pa(stack_a, stack_b, bench);
	}
}

void	chuncks_prueba(t_stack **stack_a, t_stack **stack_b, t_bench *bench)
{
	int	min_lim;
	int	max_lim;
	int	chunk_size;
	int	pos_arriba;
	int	pos_abajo;

	indexacion(*stack_a);
	chunk_size = ft_sqrt(*stack_a);
	min_lim = 0;
	max_lim = chunk_size - 1;
	while (*stack_a != NULL)
	{
		pos_arriba = -1;
		pos_abajo = -1;
		find_positions(*stack_a, min_lim, max_lim, &pos_arriba, &pos_abajo);
		while (pos_arriba != -1)
		{
			rotate_and_push(stack_a, stack_b, pos_arriba, pos_abajo, bench);
			if (*stack_b && (*stack_b)->index < (min_lim + (chunk_size / 2)))
				rb(stack_b, bench);
			pos_arriba = -1;
			pos_abajo = -1;
			find_positions(*stack_a, min_lim, max_lim, &pos_arriba, &pos_abajo);
		}
		min_lim += chunk_size;
		max_lim += chunk_size;
	}
	push_back_to_a(stack_a, stack_b, bench);
}
