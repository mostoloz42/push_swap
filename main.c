/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 17:11:10 by francysa          #+#    #+#             */
/*   Updated: 2026/07/15 12:07:13 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_stack **stack_a, t_bench *bench, int sort_type)
{
	t_stack	*stack_b;

	stack_b = NULL;
	indexacion(*stack_a);
	if (sort_type == 1)
		simple_sort(stack_a, bench);
	else if (sort_type == 2)
		medium_sort(stack_a, &stack_b, bench);
	else if (sort_type == 3)	//complex_sort()
		ft_printf("complex sort\n");
	else
		adaptive_sort(stack_a, &stack_b, bench);
}

int	main(int argc, char **argv)
{
	int		cuenta_numeros;
	int		sort_type;
	int		*los_numeros;
	t_stack	**stack_a;
	t_bench	*bench;

	if (argc < 2)
		return (0);
	sort_type = 0;
	bench = malloc(sizeof(t_bench));
	if (!bench)
		return (1);
	ft_bzero(bench, sizeof(t_bench));
	los_numeros = ft_check(argc, argv, &cuenta_numeros, &sort_type);
	if (!los_numeros)
		return (ft_printf("Error\n"), free(bench), 1);
	stack_a = create_list(los_numeros, cuenta_numeros);
	free(los_numeros);
	if (!stack_a)
		return (free(bench), 1);
	push_swap(stack_a, bench, sort_type);
	return (0);
}
