/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 12:40:19 by mostoloz          #+#    #+#             */
/*   Updated: 2026/07/07 16:20:20 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reverse(t_stack **stack)
{
	t_stack	*ultimo;
	t_stack	*antiguo_primero;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	antiguo_primero = *stack;
	ultimo = antiguo_primero;
	while (ultimo->next)
		ultimo = ultimo->next;
	if (ultimo->prev)
		ultimo->prev->next = NULL;
	ultimo->next = antiguo_primero;
	ultimo->prev = NULL;
	antiguo_primero->prev = ultimo;
	*stack = ultimo;
}

void	rra(t_stack **stack_a, t_bench *bench)
{
	reverse(stack_a);
	printf("rra\n"); //ft_printf("rra\n");
	bench->rra += 1;
	bench->total += 1;
}

void	rrb(t_stack **stack_b, t_bench *bench)
{
	reverse(stack_b);
	printf("rrb\n"); //ft_printf("rrb\n");
	bench->rrb += 1;
	bench->total += 1;
}

void	rrr(t_stack **stack_a, t_stack **stack_b, t_bench *bench)
{
	reverse(stack_a);
	reverse(stack_b);
	printf("rrr\n"); //ft_printf("rrr\n");
	bench->rrr += 1;
	bench->total += 1;
}
