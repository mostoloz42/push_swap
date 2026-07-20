/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 11:59:07 by mostoloz          #+#    #+#             */
/*   Updated: 2026/07/17 10:09:36 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_five(t_stack **stack_a, t_bench *bench, int size)
{
	t_stack	*stack_b;

	stack_b = NULL;
	while ((*stack_a)->index != 0 && (*stack_a))
		ra(stack_a, bench);
	pb(stack_a, &stack_b, bench);
	if (size == 5)
	{
		while ((*stack_a)->index != 1 && (*stack_a))
			ra(stack_a, bench);
		pb(stack_a, &stack_b, bench);
	}
	sort_three(stack_a, bench);
	while (stack_b)
		pa(stack_a, &stack_b, bench);
}
