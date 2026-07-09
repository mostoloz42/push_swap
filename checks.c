/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 13:08:16 by francysa          #+#    #+#             */
/*   Updated: 2026/07/07 15:33:44 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_duplicate(int *los_numeros, int numero_actual, int cuenta_numeros)
{
	int	i;

	i = 0;
	while (i < cuenta_numeros)
	{
		if (los_numeros[i] == numero_actual)
			return (1);
		i++;
	}
	return (0);
}

int	ft_is_number(char *str)
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

int	ft_process_split(char **aux, int	*num, int *cuent_num)
{
	long	i;
	long	numero_actual;

	i = 0;
	while (aux[i] != NULL)
	{
		if (ft_is_number(aux[i]) != 1)
		{
			ft_free_split(aux);
			return (0);
		}
		numero_actual = ft_atol(aux[i]);
		if (ft_min_max(numero_actual) != 1)
			return (ft_free_split(aux), 0);
		if (ft_check_duplicate (num, numero_actual, *cuent_num) == 1)
		{
			ft_free_split(aux);
			return (0);
		}
		num[*cuent_num] = numero_actual;
		(*cuent_num)++;
		i++;
	}
	ft_free_split(aux);
	return (1);
}

int	*ft_check(int argc, char **argv, int *cuenta_numeros)
{
	int		i;
	char	**aux_split;
	int		*los_numeros;

	i = 1;
	*cuenta_numeros = 0;
	los_numeros = malloc(sizeof(int) * argc * 2);
	if (!los_numeros)
		return (0);
	while (i < argc)
	{
		if (ft_flags(argv[i]) == 1)
			i++;
		else
		{
			aux_split = ft_split(argv[i], ' ');
			if (ft_process_split(aux_split, los_numeros, cuenta_numeros) == 0)
			{
				free(los_numeros);
				return (0);
			}
			i++;
		}
	}
	return (los_numeros);
}

/*int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	if (ft_check(argc, argv) == 1)
		ft_printf("RESULTADO: ¡Argumentos válidos! Puedes crear el Stack A.\n");
	else
		ft_printf("Error\n");
	return (0);
}*/
