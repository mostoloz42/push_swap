/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 11:03:31 by mostoloz          #+#    #+#             */
/*   Updated: 2026/07/06 17:36:10 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_stack **stack)
{
	t_stack	*nuevo;
	t_stack	*ultimo;

	if (!stack || !(*stack) || !((*stack)->next))
		return ;
	nuevo = (*stack)->next;
	ultimo = *stack;
	while (ultimo->next != NULL)
	{
		ultimo = ultimo->next;
	}
	nuevo->prev = NULL;
	ultimo->next = (*stack);
	(*stack)->prev = ultimo;
	(*stack)->next = NULL;
	*stack = nuevo;
}

void	ra(t_stack **stack_a, t_bench *bench)
{
	rotate(stack_a);
	ft_printf("ra\n");
	bench->ra += 1;
	bench->total += 1;
}

void	rb(t_stack **stack_b, t_bench *bench)
{
	rotate(stack_b);
	ft_printf("rb\n");
	bench->rb += 1;
	bench->total += 1;
}

void	rr(t_stack **stack_a, t_stack **stack_b, t_bench *bench)
{
	rotate(stack_a);
	rotate(stack_b);
	ft_printf("rr\n");
	bench->rr += 1;
	bench->total += 1;
}
