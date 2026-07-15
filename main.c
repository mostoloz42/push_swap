/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 17:11:10 by francysa          #+#    #+#             */
/*   Updated: 2026/07/15 10:06:21 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_stack **stack_a, t_bench *bench)
{
	t_stack	*stack_b;

	stack_b = NULL;
	indexacion(*stack_a);
	adaptive_sort(stack_a, &stack_b, bench);
}

int	main(int argc, char **argv)
{
	int		*los_numeros;
	int		cuenta_numeros;
	t_stack	**stack_a;
	//t_stack	*stack_b;
	t_bench	*bench;

	//stack_b = NULL;
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
	free(los_numeros);
	if (!stack_a)
	{
		free(bench);
		return (1);
	}
	push_swap(stack_a, bench);
	/* indexacion(*stack_a);
	medium_sort(stack_a, &stack_b, bench); */
	return (0);
}
