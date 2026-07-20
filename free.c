/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 15:04:38 by francysa          #+#    #+#             */
/*   Updated: 2026/07/17 13:16:43 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_split(char **aux)
{
	int	i;

	i = 0;
	while (aux[i] != NULL)
	{
		free(aux[i]);
		i++;
	}
	free(aux);
}

void	ft_free_stack(t_stack **stack_a)
{
	t_stack	*present;
	t_stack	*next;

	if (!stack_a || !*stack_a)
		return ;
	present = *stack_a;
	while (present != NULL)
	{
		next = present->next;
		free(present);
		present = next;
	}
	free(stack_a);
}
