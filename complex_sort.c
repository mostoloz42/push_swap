/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complex_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 12:48:00 by francysa          #+#    #+#             */
/*   Updated: 2026/07/14 13:54:56 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_max_bit(int nb)
{
	int	bits;
	
	bits = 0;
	while (nb != 0)
	{
		nb = nb / 2;
		bits++;
	}
	return (bits);
}

void	complex_sort(t_stack **stack_a, t_stack **stack_b, t_bench *bench)
{
	int		i;
	int		j;
	int		size;
	int		max_bits;

	i = 0;
	size = ft_lstsize_t(*stack_a);
	max_bits = get_max_bit(size - 1);
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			if ((((*stack_a)->index >> i) & 1) == 1)
				ra(stack_a, bench);
			else
				pb(stack_a, stack_b, bench);
			j++;
		}
		while (*stack_b != NULL)
			pa(stack_a, stack_b, bench);
		i++;
	}
}
