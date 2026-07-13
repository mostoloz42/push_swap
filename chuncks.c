/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chuncks.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 11:03:55 by francysa          #+#    #+#             */
/*   Updated: 2026/07/10 16:46:54 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	indexacion(t_stack *stack_a)
{
	t_stack	*nodo_actual;
	t_stack	*nodo;
	int		i;

	nodo_actual = stack_a;
	while (nodo_actual != NULL)
	{
		nodo = stack_a;
		i = 0;
		while (nodo != NULL)
		{
			if (nodo_actual->content > nodo->content)
				i++;
			nodo = nodo->next;
		}
		nodo_actual->index = i;
		nodo_actual = nodo_actual->next;
	}
}
