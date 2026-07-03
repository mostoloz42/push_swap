/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   select_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 12:31:33 by mostoloz          #+#    #+#             */
/*   Updated: 2026/07/03 10:09:30 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	optimize_path(int rotates, int stack_size)
{
	if (rotates > stack_size / 2)
		rotates = -(stack_size - rotates);
	return (rotates);
}

static int	rotates_until_min(t_list **stack_a)
{
	int		min;
	int		index;
	int		rotates;
	int		stack_size;
	t_list	*buffer_node;

	index = 1;
	rotates = 0;
	buffer_node = (*stack_a);
	min = buffer_node->content;
	buffer_node = buffer_node->next;
	stack_size = ft_lstsize(*stack_a);
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
	free(buffer_node);
	return (optimize_path(rotates, stack_size));
}

static void	rotate_and_push(int r, t_list **s_a, t_list **s_b, t_bench *bench)
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

void	select_sort(t_list **stack_a, t_bench *bench)
{
	t_list	**stack_b;
	int		rotates;

	stack_b = malloc(sizeof(t_list *));
	rotates = 0;
	while ((*stack_a)->next)
	{
		rotates = rotates_until_min(stack_a);
		rotate_and_push(rotates, stack_a, stack_b, bench);
	}
	while ((*stack_b))
		pa(stack_a, stack_b, bench);
}
/*
	int main(void)
{
	t_list **stack_a;
	t_bench *bench;

	stack_a = malloc(sizeof(t_list *));
	bench = malloc(sizeof(t_bench));
	ft_lstadd_back(stack_a, ft_lstnew(5));
	ft_lstadd_back(stack_a, ft_lstnew(2));
	ft_lstadd_back(stack_a, ft_lstnew(3));
	ft_lstadd_back(stack_a, ft_lstnew(1));
	ft_lstadd_back(stack_a, ft_lstnew(4));
	select_sort(stack_a, bench);
	while((*stack_a))
	{
		ft_printf("%d\n", (*stack_a)->content);
		(*stack_a) = (*stack_a)->next;
	}
}
	*/
