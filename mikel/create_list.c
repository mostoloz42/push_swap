/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 10:04:53 by mostoloz          #+#    #+#             */
/*   Updated: 2026/06/24 12:14:52 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	**create_list(int	*int_list)
{
	int		index;
	t_list	**stack;

	if (!int_list || !validate_input(int_list))
		return (NULL);
	index = 1;
	*stack = ft_lstnew(int_list[0]);
	while (int_list[index])
	{
		ft_lstadd_back(stack, ft_lstnew(int_list[index]));
		index++;
	}
	return (stack);
}
