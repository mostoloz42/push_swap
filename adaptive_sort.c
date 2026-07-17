/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adaptive_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 12:33:30 by mostoloz          #+#    #+#             */
/*   Updated: 2026/07/17 11:23:00 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	adaptive_sort(t_stack **stack_a, t_stack **stack_b,
	t_bench *bench, float disorder)
{
	int		size;

	size = ft_lstsize_t(*stack_a);
	if (size < 2)
		return (save_adaptive_strategy(bench, size));
	else if (size == 2)
		sa(stack_a, bench);
	else if (size == 3)
		sort_three(stack_a, bench);
	else if ((size == 4 || size == 5))
		sort_five(stack_a, bench, size);
	else if (disorder < 0.2)
		simple_sort(stack_a, bench);
	else if (disorder < 0.5)
		medium_sort(stack_a, stack_b, bench);
	else
		complex_sort(stack_a, stack_b, bench);
	save_adaptive_strategy(bench, size);
}
