/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 11:03:31 by mostoloz          #+#    #+#             */
/*   Updated: 2026/07/07 18:54:08 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_stack **stack)
{
	t_stack	*primero;
	t_stack	*nuevo_primero;
	t_stack	*ultimo;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	primero = *stack;
	nuevo_primero = primero->next;
	ultimo = primero;
	while (ultimo->next != NULL)
		ultimo = ultimo->next;
	*stack = nuevo_primero;
	nuevo_primero->prev = NULL;
	ultimo->next = primero;
	primero->prev = ultimo;
	primero->next = NULL;
}

void	ra(t_stack **stack_a, t_bench *bench)
{
	rotate(stack_a);
	printf("ra\n"); //ft_printf("ra\n");
	bench->ra += 1;
	bench->total += 1;
}

void	rb(t_stack **stack_b, t_bench *bench)
{
	rotate(stack_b);
	printf("rb\n"); //ft_printf("rb\n");
	bench->rb += 1;
	bench->total += 1;
}

void	rr(t_stack **stack_a, t_stack **stack_b, t_bench *bench)
{
	rotate(stack_a);
	rotate(stack_b);
	printf("rr\n"); //ft_printf("rr\n");
	bench->rr += 1;
	bench->total += 1;
}
