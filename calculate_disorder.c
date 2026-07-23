/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_disorder.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 10:02:53 by mostoloz          #+#    #+#             */
/*   Updated: 2026/07/23 09:43:13 by mostoloz         ###   ########.fr       */
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
	if (mistakes == 0)
		return (bench->disorder = 0, 0);
	bench->disorder = ((mistakes / pairs) * 100);
	return (mistakes / pairs);
}
