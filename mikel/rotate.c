/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 11:03:31 by mostoloz          #+#    #+#             */
/*   Updated: 2026/06/24 12:15:37 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_list **stack)
{
	t_list	*buffer;

	if (!stack || !(*stack) || !((*stack)->next))
		return (NULL);
	buffer = *stack;
	(*stack) = (*stack)->next;
	buffer->next = NULL;
	ft_lstadd_back(stack, buffer);
}
