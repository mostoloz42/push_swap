/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 12:45:11 by mostoloz          #+#    #+#             */
/*   Updated: 2026/07/03 12:19:49 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_list **src, t_list **dst)
{
	t_list	*nodo_one;

	if (!src || !*src)
		return ;
	nodo_one = *src;
	*src = (*src)->next;
	if (*src)
		(*src)->prev = NULL;
	ft_lstadd_front(dst, nodo_one);
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
