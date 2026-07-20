/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 10:45:01 by mostoloz          #+#    #+#             */
/*   Updated: 2026/07/20 12:41:15 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_stack **stack)
{
	t_stack	*buffer_a;
	t_stack	*buffer_b;

	if (!stack || !(*stack) || !((*stack)->next))
		return ;
	buffer_a = *stack;
	buffer_b = (*stack)->next;
	(*stack)->next = buffer_b->next;
	if (buffer_a->next != NULL)
		buffer_a->next->prev = buffer_a;
	buffer_b->next = buffer_a;
	buffer_a->prev = buffer_b;
	buffer_b->prev = NULL;
	*stack = buffer_b;
}

void	sa(t_stack **stack_a, t_bench *bench)
{
	swap(stack_a);
	ft_printf("sa\n", 1);
	bench->sa += 1;
	bench->total += 1;
}

void	sb(t_stack **stack_b, t_bench *bench)
{
	swap(stack_b);
	ft_printf("sb\n", 1);
	bench->sb += 1;
	bench->total += 1;
}

void	ss(t_stack **stack_a, t_stack **stack_b, t_bench *bench)
{
	swap(stack_a);
	swap(stack_b);
	ft_printf("ss\n", 1);
	bench->ss += 1;
	bench->total += 1;
}
