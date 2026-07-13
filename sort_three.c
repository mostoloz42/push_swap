/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 10:13:42 by mostoloz          #+#    #+#             */
/*   Updated: 2026/07/13 11:51:23 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack **stack_a, t_bench *bench)
{
	int	a;
	int	b;
	int	c;

	a = (*stack_a)->content;
	b = (*stack_a)->next->content;
	c = (*stack_a)->next->next->content;
	if (a < b && a < c && b > c)
	{
		sa(stack_a, bench);
		ra(stack_a, bench);
	}
	else if (a > b && a < c && b < c)
		sa(stack_a, bench);
	else if (a < b && a > c && b > c)
		rra(stack_a, bench);
	else if (a > b && a > c && b < c)
		ra(stack_a, bench);
	else if (a > b && a > c && b > c)
	{
		sa(stack_a, bench);
		rra(stack_a, bench);
	}
}
