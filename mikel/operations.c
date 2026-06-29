/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 10:27:15 by mostoloz          #+#    #+#             */
/*   Updated: 2026/06/29 11:56:22 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list **stack_a, t_list **stack_b, t_bench *bench)
{
	rotate(stack_a);
	ft_printf("ra\n");
	bench->ra += 1;
	bench->total += 1;
}

void	pa(t_list **stack_a, t_list **stack_b, t_bench *bench)
{
	push(stack_b, stack_a);
	ft_printf("pa\n");
	bench->pa += 1;
	bench->total += 1;
}

void	pa(t_list **stack_a, t_list **stack_b, t_bench *bench)
{
	push(stack_b, stack_a);
	ft_printf("pa\n");
	bench->pa += 1;
	bench->total += 1;
}

void	pa(t_list **stack_a, t_list **stack_b, t_bench *bench)
{
	push(stack_b, stack_a);
	ft_printf("pa\n");
	bench->pa += 1;
	bench->total += 1;
}

void	pa(t_list **stack_a, t_list **stack_b, t_bench *bench)
{
	push(stack_b, stack_a);
	ft_printf("pa\n");
	bench->pa += 1;
	bench->total += 1;
}

void	pa(t_list **stack_a, t_list **stack_b, t_bench *bench)
{
	push(stack_b, stack_a);
	ft_printf("pa\n");
	bench->pa += 1;
	bench->total += 1;
}


