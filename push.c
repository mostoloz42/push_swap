/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 12:45:11 by mostoloz          #+#    #+#             */
/*   Updated: 2026/07/13 11:49:52 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack **src, t_stack **dst)
{
	t_stack	*nodo_one;

	if (!src || !*src)
		return ;
	nodo_one = *src;
	*src = (*src)->next;
	if (*src)
		(*src)->prev = NULL;
	nodo_one->next = *dst;
	nodo_one->prev = NULL;
	if (*dst)
		(*dst)->prev = nodo_one;
	*dst = nodo_one;
}

void	pa(t_stack **stack_a, t_stack **stack_b, t_bench *bench)
{
	push(stack_b, stack_a);
	printf("pa\n"); //ft_printf("pa\n");
	bench->pa += 1;
	bench->total += 1;
}

void	pb(t_stack **stack_a, t_stack **stack_b, t_bench *bench)
{
	push(stack_a, stack_b);
	printf("pb\n"); //ft_printf("pb\n");
	bench->pb += 1;
	bench->total += 1;
}
