/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adaptive_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 12:33:30 by mostoloz          #+#    #+#             */
/*   Updated: 2026/07/15 10:06:07 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	adaptive_sort(t_stack **stack_a, t_stack **stack_b, t_bench *bench)
{
	float	disorder;
	int		size;

	disorder = calculate_disorder(*stack_a);
	size = ft_lstsize_t(*stack_a);
	if (size < 2)
		return ;
	else if (size == 2)
	{
		if ((*stack_a)->content > (*stack_a)->next->content)
			sa(stack_a, bench);
	}
	else if (size == 3)
		sort_three(stack_a, bench);
	else if (size == 4 || size == 5)
		sort_five(stack_a, bench, size);
	else if (disorder < 0.2)
		simple_sort(stack_a, bench);
	else if (disorder < 0.5)
		medium_sort(stack_a, stack_b, bench);
	else
		ft_printf("complex sort\n");
//		complex_sort(stack_a, bench);
}
