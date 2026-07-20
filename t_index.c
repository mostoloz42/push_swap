/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_index.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 08:34:16 by francysa          #+#    #+#             */
/*   Updated: 2026/07/17 13:15:12 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_index(t_stack *stack_a)
{
	t_stack	*node_present;
	t_stack	*node;
	int		i;

	node_present = stack_a;
	while (node_present != NULL)
	{
		node = stack_a;
		i = 0;
		while (node != NULL)
		{
			if (node_present->content > node->content)
				i++;
			node = node->next;
		}
		node_present->index = i;
		node_present = node_present->next;
	}
}
