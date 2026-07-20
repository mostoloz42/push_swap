/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 17:11:10 by francysa          #+#    #+#             */
/*   Updated: 2026/07/20 09:40:54 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_swap(t_stack **stack_a, t_bench *bench)
{
	t_stack	*stack_b;
	float	disorder;

	disorder = calculate_disorder(*stack_a, bench);
	if (disorder == 0)
		return (no_disorder(bench));
	stack_b = NULL;
	ft_index(*stack_a);
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
	int		lot_num;
	int		*numbers;
	t_stack	**stack_a;
	t_bench	*bench;

	if (argc < 2)
		return (0);
	bench = malloc(sizeof(t_bench));
	if (!bench)
		return (1);
	ft_bzero(bench, sizeof(t_bench));
	numbers = ft_check(argc, argv, &lot_num, bench);
	if (!numbers)
		return (write(2, "Error\n", 6), free(bench), 1);
	stack_a = create_list(numbers, lot_num);
	free(numbers);
	if (!stack_a)
		return (free(bench), 1);
	push_swap(stack_a, bench);
	if (bench->show == 1)
		print_bench(bench);
	free(bench);
	ft_free_stack(stack_a);
	return (0);
}
