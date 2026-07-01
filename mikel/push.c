/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 12:45:11 by mostoloz          #+#    #+#             */
/*   Updated: 2026/07/01 10:28:41 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_list **src, t_list **dst)
{
	t_list	*node_to_push;

	if (!src)
		return ;
	node_to_push = *src;
	*src = (*src)->next;
	ft_lstadd_front(dst, node_to_push);
}

void	pa(t_list **stack_a, t_list **stack_b, t_bench *bench)
{
	push(stack_b, stack_a);
	ft_printf("pa\n");
	bench->pa += 1;
	bench->total += 1;
}

void	pb(t_list **stack_a, t_list **stack_b, t_bench *bench)
{
	push(stack_a, stack_b);
	ft_printf("pb\n");
	bench->pb += 1;
	bench->total += 1;
}
