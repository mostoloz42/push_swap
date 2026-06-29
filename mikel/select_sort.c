/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   select_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 12:31:33 by mostoloz          #+#    #+#             */
/*   Updated: 2026/06/29 10:33:26 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	**select_sort(t_list **stack_a)
{
	t_list	**stack_b;
	t_list	*min_node;
	t_list	*current_node;
	int		min;

	current_node = *stack_a;
	min = current_node->content;
	min_node = current_node;
	while (current_node)
	{
		while (*stack_a)
		{
			if (((*stack_a)->content) < min_node->content)
				min_node = (*stack_a);
			rotate(stack_a);
		}
	}
}
