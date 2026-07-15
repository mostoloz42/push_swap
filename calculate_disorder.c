/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_disorder.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 10:02:53 by mostoloz          #+#    #+#             */
/*   Updated: 2026/07/15 10:12:07 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

float	calculate_disorder(t_stack *stack)
{
	int	mistakes;
	int	pairs;

	mistakes = 0;
	pairs = 0;
	while (stack && stack->next)
	{
		ft_printf("%d\n", stack->content, stack->next->content);
		pairs++;
		if (stack->content > stack->next->content)
			mistakes++;
		stack = stack->next;
	}
	return ((float) mistakes / pairs);
}
