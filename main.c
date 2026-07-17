/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 17:11:10 by francysa          #+#    #+#             */
/*   Updated: 2026/07/17 10:27:59 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_swap(t_stack **stack_a, t_bench *bench)
{
	t_stack	*stack_b;
	float	disorder;

	disorder = calculate_disorder(*stack_a, bench);
	stack_b = NULL;
	indexacion(*stack_a);
	if (bench->sort_type == 1)
		simple_sort(stack_a, bench);
	else if (bench->sort_type == 2)
		medium_sort(stack_a, &stack_b, bench);
	else if (bench->sort_type == 3)
		complex_sort(stack_a, &stack_b, bench);
	else
		adaptive_sort(stack_a, &stack_b, bench, disorder);
}

int	main(int argc, char **argv)
{
	int		cuenta_numeros;
	int		*los_numeros;
	t_stack	**stack_a;
	t_bench	*bench;

	if (argc < 2)
		return (0);
	bench = malloc(sizeof(t_bench));
	if (!bench)
		return (1);
	ft_bzero(bench, sizeof(t_bench));
	los_numeros = ft_check(argc, argv, &cuenta_numeros, bench);
	if (!los_numeros)
		return (ft_printf("Error\n"), free(bench), 1);
	stack_a = create_list(los_numeros, cuenta_numeros);
	free(los_numeros);
	if (!stack_a)
		return (free(bench), 1);
	push_swap(stack_a, bench);
	if (bench->show == 1)
		print_bench(bench);
	return (0);
}
