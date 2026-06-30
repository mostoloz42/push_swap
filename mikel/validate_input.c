/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 09:46:23 by mostoloz          #+#    #+#             */
/*   Updated: 2026/06/30 10:54:25 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	validate_input(int	*input_list)
{
	int	i;
	int	j;
	int	checking;

	i = 0;
	while (input_list[i])
	{
		checking = input_list[i];
		j = i + 1;
		while (input_list[j])
		{
			if (input_list[j] == checking)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
