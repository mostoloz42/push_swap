/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_disorder.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 10:02:53 by mostoloz          #+#    #+#             */
/*   Updated: 2026/07/16 12:33:50 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

float	calculate_disorder(t_stack *stack, t_bench *bench)
{
	int	mistakes;
	int	pairs;

	mistakes = 0;
	pairs = 0;
	if (ft_lstsize_t(stack) == 1)
	{
		bench->disorder = 0;
		return (0);
	}
	while (stack && stack->next)
	{
		pairs++;
		if (stack->content > stack->next->content)
			mistakes++;
		stack = stack->next;
	}
	bench->disorder = (((float) mistakes / pairs) * 100);
	return ((float) mistakes / pairs);
}
