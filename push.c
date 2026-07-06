/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 12:45:11 by mostoloz          #+#    #+#             */
/*   Updated: 2026/07/06 17:32:38 by francysa         ###   ########.fr       */
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
	ft_lstadd_front_t(dst, nodo_one);
}

void	pa(t_stack **stack_a, t_stack **stack_b, t_bench *bench)
{
	push(stack_b, stack_a);
	ft_printf("pa\n");
	bench->pa += 1;
	bench->total += 1;
}

void	pb(t_stack **stack_a, t_stack **stack_b, t_bench *bench)
{
	push(stack_a, stack_b);
	ft_printf("pb\n");
	bench->pb += 1;
	bench->total += 1;
}
