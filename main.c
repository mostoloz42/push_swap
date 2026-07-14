/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 17:11:10 by francysa          #+#    #+#             */
/*   Updated: 2026/07/14 10:30:24 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	//int		*los_numeros;
	//int		cuenta_numeros;
	t_stack	**stack_a;
	//t_stack	*stack_b;
	//t_bench	*bench;

	//stack_b = NULL;
	if (argc < 2)
		return (0);
	///bench = malloc(sizeof(t_bench));
	//if (!bench)
	//	return (1);
	//ft_bzero(bench, sizeof(t_bench));
	//los_numeros = ft_check(argc, argv, &cuenta_numeros);
	if (!los_numeros)
	{
		write(2, "Error\n", 7);
		free(bench); // Liberamos bench para evitar leaks si falla la validación
		return (1);
	}
	stack_a = create_list(los_numeros, cuenta_numeros);
	free(los_numeros);
	if (!stack_a)
	{
		free(bench);
		return (1);
	}
	indexacion(*stack_a);
	select_medium(stack_a, &stack_b, bench);
	return (0);
}

void	push_swap(int argc, char **argv)
{
	int		*los_numeros;
	int		cuenta_numeros;
	t_stack	**stack_a;
	t_stack	*stack_b;
	t_bench	*bench;

	stack_b = NULL;
	if (argc < 2)
		return (0);
	bench = malloc(sizeof(t_bench));
	if (!bench)
		return (1);
	ft_bzero(bench, sizeof(t_bench));
	los_numeros = ft_check(argc, argv, &cuenta_numeros);
	if (!los_numeros)
	{
		ft_printf("Error\n");
		free(bench); // Liberamos bench para evitar leaks si falla la validación
		return (1);
	}
	stack_a = create_list(los_numeros, cuenta_numeros);
	indexacion(*stack_a);
	free(los_numeros);
	if (!stack_a)
	{
		free(bench);
		return (1);
	}
	indexacion(*stack_a);
	select_medium(stack_a, &stack_b, bench);
	return (0);
}