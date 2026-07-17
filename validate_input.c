/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 09:46:23 by mostoloz          #+#    #+#             */
/*   Updated: 2026/07/16 13:37:25 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	validate_input(int	*input_list, int size)
{
	int	i;
	int	j;
	int	checking;

	i = 0;
	while (i < size)
	{
		checking = input_list[i];
		j = i + 1;
		while (j < size)
		{
			if (input_list[j] == checking)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
