/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_disorder.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 10:02:53 by mostoloz          #+#    #+#             */
/*   Updated: 2026/07/21 11:55:10 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

float	calculate_disorder(t_stack *stack, t_bench *bench)
{
	float			mistakes;
	float			pairs;
	t_stack			*node;

	mistakes = 0;
	pairs = 0;
	while (stack && stack->next)
	{
		node = stack->next;
		while (node)
		{
			pairs++;
			if (stack->content > node->content)
				mistakes++;
			node = node->next;
		}
		stack = stack->next;
	}
	bench->disorder = ((mistakes / pairs) * 100);
	return (mistakes / pairs);
}
