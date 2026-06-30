/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 13:08:16 by francysa          #+#    #+#             */
/*   Updated: 2026/06/25 16:28:47 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include "push_swap.h"

void	ft_free_split(char **aux)
{
	int	i;

	i = 0;
	while (aux[i] != NULL)
	{
		free(aux[i]);
		i++;
	}
	free(aux);
}

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

int	ft_check(int argc, char **argv)
{
	int		i;
	char	**aux_split;
	int		*los_numeros;
	int		cuenta_numeros;

	i = 1;
	cuenta_numeros = 0;
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
			if (ft_process_split(aux_split, los_numeros, &cuenta_numeros) == 0)
				return (free(los_numeros), 0);
			i++;
		}
	}
	free(los_numeros);
	return (1);
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

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	count;

	count = 0;
	if (n == 0)
		return (0);
	while (count < n - 1 && s1[count] && s1[count] == s2[count])
		count++;
	return ((unsigned char)s1[count] - (unsigned char)s2[count]);
}

int	ft_manejo_flags(char *argv)
{
	char	*s1;
	char	*s2;
	char	*s3;
	char	*s4;

	s1 = "simple";
	s2 = "medium";
	s3 = "complex";
	s4 = "adaptive";
	if (ft_strncmp(argv, s1, 7) == 0)
	{
		printf("algoritmo simple");
		return (1);
	}
	else if (ft_strncmp(argv, s2, 7) == 0)
	{
		printf("algoritmo medio");
		return (1);
	}
	else if (ft_strncmp(argv, s3, 8) == 0)
	{
		printf("algoritmo complex");
		return (1);
	}
	else if (ft_strncmp(argv, s4, 9) == 0)
	{
		printf("algoritmo adaptativo");
		return (1);
	}
	return (0);
}

int	ft_flags(char *argv)
{
	if (argv[0] == '-' && argv[1] == '-')
	{
		ft_manejo_flags(&argv[2]);
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	printf("--- Iniciando Validación de Argumentos ---\n");
	if (ft_check(argc, argv) == 1)
	{
		printf("RESULTADO: ¡Argumentos válidos! Puedes crear el Stack A.\n");
	}
	else
	{
		printf("RESULTADO: Error\\n (Argumento inválido o número duplicado)\n");
	}
	return (0);
}
