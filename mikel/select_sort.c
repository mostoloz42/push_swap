/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   select_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 12:31:33 by mostoloz          #+#    #+#             */
/*   Updated: 2026/06/29 12:49:42 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	optimize_path(int rotates, int stack_size)
{
	if (rotates > stack_size / 2)
	//si los rotates son mas que la mitad del tamaño del stack es que es mas eficiente hacer reverse rotates
	{
		//si se devuelve un numero negativo hacer tantos reverse rotates como el valor absoluto de lo que se devuelve
	}
	//si se devuelve un numero positivo hacer esos rotates normales
	
}

int	rotates_until_min(t_list **stack_a)
{
	int		min;
	int		index;
	int		rotates;
	int		stack_size;
	t_list	*buffer_node;

	index = 0;
	rotates = 0;
	buffer_node = (*stack_a);
	min = buffer_node->content;
	buffer_node = buffer_node->next;
	stack_size = ft_lstsize(stack_a);
	while (index < stack_size && buffer_node != NULL)
	{
		if (buffer_node->content < min)
		{
			min = buffer_node->content;
			rotates = index;
		}
		buffer_node = buffer_node->next;
		index++;
	}
	return(optimize_path(rotates, stack_size));
}

t_list	**select_sort(t_list **stack_a, t_bench *bench)
{
	t_list	**stack_b;
	t_list	*min_node;
	t_list	*current_node;

	while (current_node)
	{
		current_node = *stack_a;
		min_node = current_node;
		ra(stack_a, bench);
		while ((*stack_a)->content != current_node->content)
		{
			if (((*stack_a)->content) < min_node->content)
				min_node = (*stack_a);
			ra(stack_a, bench);
		}
	}
}
