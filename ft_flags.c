/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 15:07:12 by francysa          #+#    #+#             */
/*   Updated: 2026/07/02 12:22:28 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_manejo_flags(char *argv)
{
	if (ft_strncmp(argv, "simple", 7) == 0)
	{
		ft_printf("algoritmo simple\n");
		return (1);
	}
	else if (ft_strncmp(argv, "medium", 7) == 0)
	{
		ft_printf("algoritmo medio\n");
		return (1);
	}
	else if (ft_strncmp(argv, "complex", 8) == 0)
	{
		ft_printf("algoritmo complex\n");
		return (1);
	}
	else if (ft_strncmp(argv, "adaptive", 9) == 0)
	{
		ft_printf("algoritmo adaptativo\n");
		return (1);
	}
	return (0);
}

int	ft_flags(char *argv)
{
	if (argv[0] == '-' && argv[1] == '-')
	{
		return (ft_manejo_flags(&argv[2]));
	}
	return (0);
}
