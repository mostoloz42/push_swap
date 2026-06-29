/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 12:40:19 by mostoloz          #+#    #+#             */
/*   Updated: 2026/06/29 12:03:51 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reverse(t_list **stack)
{
	t_list	*prev;
	t_list	*last;

	if (!stack || !*stack)
		return ;
	prev = NULL;
	last = *stack;
	while (last->next != NULL)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = *stack;
	*stack = last;
}

void	rra(t_list **stack_a, t_bench *bench)
{
	reverse(stack_a);
	ft_printf("rra\n");
	bench->rra += 1;
	bench->total += 1;
}

void	rrb(t_list **stack_b, t_bench *bench)
{
	reverse(stack_b);
	ft_printf("rrb\n");
	bench->rrb += 1;
	bench->total += 1;
}

void	rrr(t_list **stack_a, t_list **stack_b, t_bench *bench)
{
	rotate(stack_a);
	rotate(stack_b);
	ft_printf("rrr\n");
	bench->rrr += 1;
	bench->total += 1;
}

