/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 13:08:16 by francysa          #+#    #+#             */
/*   Updated: 2026/07/23 10:32:44 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_check_duplicate(int *numbers, int num_present,
	int lot_num)
{
	int	i;

	i = 0;
	while (i < lot_num)
	{
		if (numbers[i] == num_present)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_is_number(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (str[i] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

static int	ft_process_split(char **aux, int *num, int *cuent_num)
{
	long	i;
	long	num_present;

	i = 0;
	while (aux[i] != NULL)
	{
		if (ft_is_number(aux[i]) != 1)
			return (ft_free_split(aux), 0);
		num_present = ft_atol(aux[i]);
		if (ft_min_max(num_present) != 1)
			return (ft_free_split(aux), 0);
		if (ft_check_duplicate (num, num_present, *cuent_num) == 1)
			return (ft_free_split(aux), 0);
		num[*cuent_num] = num_present;
		(*cuent_num)++;
		i++;
	}
	return (ft_free_split(aux), 1);
}

int	*ft_check(int argc, char **argv, int *lot_num, t_bench *bench)
{
	int		i;
	char	**aux_split;
	int		*numbers;

	i = 1;
	*lot_num = 0;
	numbers = malloc(sizeof(int) * argc * 2);
	if (!numbers)
		return (0);
	while (i < argc)
	{
		if (ft_flags(argv[i], bench) != 1)
		{
			aux_split = ft_split(argv[i], ' ');
			if (ft_process_split(aux_split, numbers, lot_num) == 0)
			{
				free(numbers);
				return (0);
			}
		}
		i++;
	}
	return (numbers);
}
