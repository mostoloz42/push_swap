/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_disorder.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 10:02:53 by mostoloz          #+#    #+#             */
/*   Updated: 2026/06/25 12:34:13 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

float	calculate_disorder(int *stack)
{
	int	mistakes;
	int	pairs;
	int	i;

	mistakes = 0;
	pairs = 0;
	i = 0;
	while (stack[i] && stack[i + 1])
	{
		pairs++;
		if (stack[i] > stack[i + 1])
			mistakes++;
		i++;
	}
	return ((float) mistakes / pairs);
}
