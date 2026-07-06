/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 12:40:19 by mostoloz          #+#    #+#             */
/*   Updated: 2026/07/06 17:35:46 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reverse(t_stack **stack)
{
	t_stack	*ultimo;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	ultimo = ft_lstlast_t((*stack));
	ultimo->prev->next = NULL;
	ft_lstadd_front_t(stack, ultimo);
}

void	rra(t_stack **stack_a, t_bench *bench)
{
	reverse(stack_a);
	ft_printf("rra\n");
	bench->rra += 1;
	bench->total += 1;
}

void	rrb(t_stack **stack_b, t_bench *bench)
{
	reverse(stack_b);
	ft_printf("rrb\n");
	bench->rrb += 1;
	bench->total += 1;
}

void	rrr(t_stack **stack_a, t_stack **stack_b, t_bench *bench)
{
	reverse(stack_a);
	reverse(stack_b);
	ft_printf("rrr\n");
	bench->rrr += 1;
	bench->total += 1;
}
