/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 12:45:11 by mostoloz          #+#    #+#             */
/*   Updated: 2026/06/30 10:52:32 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_list **src, t_list **dst)
{
	t_list	*nodo_one;

	if (!src || !*dst)
		return ;
	nodo_one = *dst;
	*dst = (*dst)->next;
	nodo_one->next = *src;
	*src = nodo_one;
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
