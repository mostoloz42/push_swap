/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 10:04:53 by mostoloz          #+#    #+#             */
/*   Updated: 2026/07/13 11:38:27 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	**create_list(int	*int_list, int size)
{
	int		index;
	t_stack	**stack;

	if (!int_list || !validate_input(int_list))
		return (NULL);
	stack = malloc(sizeof(t_stack *));
	if (!stack)
		return (NULL);
	*stack = NULL; // Inicializar el ancla de la lista NULL
	index = 0;
	while (index < size)
	{
		ft_lstadd_back_t(stack, ft_lstnew_t(int_list[index]));
		index++;
	}
	return (stack);
}
