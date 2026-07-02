/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 11:03:31 by mostoloz          #+#    #+#             */
/*   Updated: 2026/06/30 10:45:14 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_list **stack)
{
	t_list	*buffer;

	if (!stack || !(*stack) || !((*stack)->next))
		return ;
	buffer = *stack;
	(*stack) = (*stack)->next;
	buffer->next = NULL;
	ft_lstadd_back(stack, buffer);
}

void	ra(t_list **stack_a, t_bench *bench)
{
	rotate(stack_a);
	ft_printf("ra\n");
	bench->ra += 1;
	bench->total += 1;
}

void	rb(t_list **stack_b, t_bench *bench)
{
	rotate(stack_b);
	ft_printf("rb\n");
	bench->rb += 1;
	bench->total += 1;
}

void	rr(t_list **stack_a, t_list **stack_b, t_bench *bench)
{
	rotate(stack_a);
	rotate(stack_b);
	ft_printf("rr\n");
	bench->rr += 1;
	bench->total += 1;
}
