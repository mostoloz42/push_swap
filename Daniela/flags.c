/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 13:08:16 by francysa          #+#    #+#             */
/*   Updated: 2026/06/25 12:00:26 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_duplicados(int argc, char *argv)
{
	char	*tem;
	int	cuenta;

	tem = malloc(argc + 1);
	if (!argc)
		return (0);
	cuenta = 0;
	while (ft_is_number(argv) == 1)
	{
		
	}
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

char	**ft_manejo_flags(char *argv)
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
		printf("algoritmo simple");
	else if (ft_strncmp(argv, s2, 7) == 0)
		printf("algoritmo medio");
	else if (ft_strncmp(argv, s3, 8) == 0)
		printf("algoritmo complex");
	else if (ft_strncmp(argv, s4, 9) == 0)
		printf("algoritmo adaptativo");
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

int	main(int argc, char *argv[])
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
}
