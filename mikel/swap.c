/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 10:45:01 by mostoloz          #+#    #+#             */
/*   Updated: 2026/06/25 10:52:26 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

void	swap(t_list **stack)
{
	t_list	*buffer_a;
	t_list	*buffer_b;

	if (!stack || !(*stack) || !((*stack)->next))
		return (NULL);
	buffer_a = *stack;
	buffer_b = (*stack)-> next;
	(*stack)-> next = buffer_b -> next;
	buffer_b -> next = buffer_a;
	*stack = buffer_b;
}
