/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chuncks.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 11:03:55 by francysa          #+#    #+#             */
/*   Updated: 2026/07/09 11:36:34 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	chuncks(t_stack **stack_a, t_bench *bench)
{
	t_stack	**stack_b;
	t_stack	*nodo_actual;
	int	j;
	int	limite_inferior;
	int	limite_superior;

	stack_b = malloc(sizeof(t_list *));
	j = ft_sqrt_aux(*stack_a);
	indexacion(*stack_a);
	limite_inferior = 0;
	limite_superior = j;
	nodo_actual = *stack_a;
	while (nodo_actual)
	{
		if (nodo_actual->index <= j)
		{
			pb(stack_a, stack_b, bench);
			if (nodo_actual->index <= (j / 2))
				rb(stack_b, bench);
		}
		nodo_actual = *stack_a;
		ra(stack_a, bench);
	}
}
