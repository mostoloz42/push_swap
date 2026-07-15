/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_intermedio.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 15:52:59 by francysa          #+#    #+#             */
/*   Updated: 2026/07/15 09:52:11 by mostoloz         ###   ########.fr       */
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

static int	es_del_chunk(t_stack *nodo, int *lims)
{
	if (!nodo)
		return (0);
	if (nodo->index >= lims[0] && nodo->index <= lims[1])
		return (1);
	return (0);
}

static	void	find_positions_down(t_stack *stack_a, int *lims, int *pos)
{
	t_stack	*actual;
	int		i;
	int		found;

	actual = stack_a;
	while (actual && actual->next)
		actual = actual->next;
	i = ft_lstsize_t(stack_a) - 1;
	found = 0;
	while (actual && !found)
	{
		if (es_del_chunk(actual, lims))
		{
			pos[1] = i;
			found = 1;
		}
		i--;
		actual = actual->prev;
	}
}

void	find_positions(t_stack *stack_a, int *lims, int *pos)
{
	t_stack	*actual;
	int		i;
	int		found;

	actual = stack_a;
	i = 0;
	found = 0;
	while (actual && !found)
	{
		if (es_del_chunk(actual, lims))
		{
			pos[0] = i;
			found = 1;
		}
		i++;
		actual = actual->next;
	}
	if (pos[0] == -1)
		return ;
	else
	{
		find_positions_down(stack_a, lims, pos);
	}
}
