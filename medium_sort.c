/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 16:06:53 by francysa          #+#    #+#             */
/*   Updated: 2026/07/14 12:49:16 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

static void	rotate_and_push(t_stack **sa, t_stack **sb,
			int *pos, t_bench *bench)
{
	int	size_a;
	int	coste_rra;

	size_a = ft_lstsize_t(*sa);
	if (pos[0] <= (size_a - pos[1]))
	{
		while (pos[0]-- > 0)
			ra(sa, bench);
	}
	else
	{
		coste_rra = size_a - pos[1];
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

void	medium_sort(t_stack **stack_a, t_stack **stack_b, t_bench *bench)
{
	int	lims[2];
	int	pos[2];
	int	chunk_size;

	chunk_size = ft_sqrt(*stack_a);
	lims[0] = 0;
	lims[1] = chunk_size - 1;
	while (*stack_a != NULL)
	{
		pos[0] = -1;
		pos[1] = -1;
		find_positions(*stack_a, lims, pos);
		while (pos[0] != -1)
		{
			rotate_and_push(stack_a, stack_b, pos, bench);
			if (*stack_b && (*stack_b)->index < (lims[0] + (chunk_size / 2)))
				rb(stack_b, bench);
			pos[0] = -1;
			pos[1] = -1;
			find_positions(*stack_a, lims, pos);
		}
		lims[0] += chunk_size;
		lims[1] += chunk_size;
	}
	push_back_to_a(stack_a, stack_b, bench);
}
