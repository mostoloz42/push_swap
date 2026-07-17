/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 12:31:33 by mostoloz          #+#    #+#             */
/*   Updated: 2026/07/17 12:35:49 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	optimize_path(int rotates, int stack_size)
{
	if (rotates > stack_size / 2)
		rotates = -(stack_size - rotates);
	return (rotates);
}

static int	rotates_until_min(t_stack **stack_a)
{
	int		min;
	int		index;
	int		rotates;
	int		stack_size;
	t_stack	*buffer_node;

	index = 1;
	rotates = 0;
	buffer_node = (*stack_a);
	min = buffer_node->content;
	buffer_node = buffer_node->next;
	stack_size = ft_lstsize_t(*stack_a);
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
	return (optimize_path(rotates, stack_size));
}

static void	rotate_and_push(t_stack **s_a, t_stack **s_b, t_bench *bench, int r)
{
	int	reverse;
	int	i;

	i = 0;
	reverse = 0;
	if (r < 0)
	{
		r = r * -1;
		reverse = 1;
	}
	while (i < r)
	{
		if (reverse == 1)
			rra(s_a, bench);
		else
			ra(s_a, bench);
		i++;
	}
	pb(s_a, s_b, bench);
}

void	simple_sort(t_stack **stack_a, t_bench *bench)
{
	t_stack	*stack_b;
	int		rotates;

	bench->strategy = "Simple / O(n²)";
	stack_b = NULL;
	rotates = 0;
	while (*stack_a && (*stack_a)->next)
	{
		rotates = rotates_until_min(stack_a);
		rotate_and_push(stack_a, &stack_b, bench, rotates);
	}
	while (stack_b)
		pa(stack_a, &stack_b, bench);
}
