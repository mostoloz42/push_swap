/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 11:03:31 by mostoloz          #+#    #+#             */
/*   Updated: 2026/07/17 13:12:11 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_stack **stack)
{
	t_stack	*first;
	t_stack	*new_first;
	t_stack	*latter;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	first = *stack;
	new_first = first->next;
	latter = first;
	while (latter->next != NULL)
		latter = latter->next;
	*stack = new_first;
	new_first->prev = NULL;
	latter->next = first;
	first->prev = latter;
	first->next = NULL;
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
