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

int	ft_check(int argc, char **argv)
{
	int	i;
	int j;
	int	z;
	char *tem;
	char **aux_split;
	char *str;
	int	*los_numeros;
	int	cuenta_numeros;
	int numero_actual;
	int k;
	
	cuenta_numeros = 0;
	los_numeros = malloc(sizeof(int) * argc * 2);
	i = 1;
	j = 0;
	
	while (i < argc)
	{
		if (ft_manejo_flags(argv[i]) == 1)
		{
			i++;
		}
		else
		{
			tem = argv[i];
			aux_split = ft_split(tem, ' ');
			z = 0;
			while (aux_split[z] != NULL)
			{
				if (ft_is_number(aux_split[z]) != 1)
				{
					ft_free_split(aux_split);
					free(los_numeros);
					return (0);
				}
				numero_actual = ft_atoi(aux_split[z]);
				k = 0;
				while (k < cuenta_numeros)
				{
					if (los_numeros[k] == numero_actual)
					{
						ft_free_split(aux_split);
						free(los_numeros);
						return (0);
					}
					k++;
				}
				los_numeros[cuenta_numeros] = numero_actual;
				cuenta_numeros++;
				z++;
			}
			ft_free_split(aux_split);
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

int	ft_flags(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < argc)
	{
		if (argv[i][j] == '-')
		{
			j++;
			if (argv[i][j] == '-')
			{
				j++;
				ft_manejo_flags(&argv[i][j]);
			}
		}
		j = 0;
		i++;
	}
	return (0);
}

/* int	main(int argc, char *argv[])
{
	int	i;

	if (argc < 1)
		return (0);
	i = 1;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	ft_flags(argc, argv);
 	i = 1;
	while (i < argc)
	{
		if (ft_is_number(argv[i]) == 1)
			printf("%s es un número válido\n", argv[i]);
		else
			printf("%s NO es un número válido\n", argv[i]);
	i++;
	}
	return (0);
}  */

int	main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("(Entrada vacía: el programa termina en silencio)\n");
		return (0);
	}

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
