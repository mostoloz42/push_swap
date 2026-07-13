/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_intermedio.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 15:52:59 by francysa          #+#    #+#             */
/*   Updated: 2026/07/10 17:14:05 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sqrt(t_stack *stack_a)
{
	int	i;
	int	nb;

	nb = ft_lstsize_t(stack_a);
	if (nb < 1)
		return (0);
	i = 1;
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	i = i - 1;
	return (i);
}

int	es_del_chunk(t_stack *nodo, int min_lim, int max_lim)
{
	if (!nodo)
		return (0);
	if (nodo->index >= min_lim && nodo->index <= max_lim)
		return (1);
	return (0);
}

void	find_positions(t_stack *stack_a, int min, int max, int *arriba, int *abajo) //rellenar arriba y abajo
{
	t_stack	*actual;
	int	i;
	int	found;

	actual = stack_a;
	i = 0;
	found = 0;
	while (actual && !found)
	{
		if (es_del_chunk(actual, min, max))
		{
			*arriba = i;
			found = 1;
		}
		i++;
		actual = actual->next;
	}
	if(*arriba == -1)
		return ;
	actual = stack_a;
	while (actual && actual->next)
		actual = actual->next;
	i = ft_lstsize_t(stack_a) - 1;
	found = 0;
	while (actual && !found)
	{
		if (es_del_chunk(actual, min, max))
		{
			*abajo = i;
			found = 1;
		}
		i--;
		actual =actual->prev;
	}
}
