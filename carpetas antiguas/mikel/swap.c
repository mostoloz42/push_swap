/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 10:45:01 by mostoloz          #+#    #+#             */
/*   Updated: 2026/06/30 10:52:21 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

static void	swap(t_list **stack)
{
	t_list	*buffer_a;
	t_list	*buffer_b;

	if (!stack || !(*stack) || !((*stack)->next))
		return ;
	buffer_a = *stack;
	buffer_b = (*stack)-> next;
	(*stack)-> next = buffer_b -> next;
	buffer_b -> next = buffer_a;
	*stack = buffer_b;
}

void	sa(t_list **stack_a, t_bench *bench)
{
	swap(stack_a);
	ft_printf("sa\n");
	bench->sa += 1;
	bench->total += 1;
}

void	sb(t_list **stack_b, t_bench *bench)
{
	swap(stack_b);
	ft_printf("sb\n");
	bench->sb += 1;
	bench->total += 1;
}

void	ss(t_list **stack_a, t_list **stack_b, t_bench *bench)
{
	swap(stack_a);
	swap(stack_b);
	ft_printf("ss\n");
	bench->ss += 1;
	bench->total += 1;
}
