/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 12:40:19 by mostoloz          #+#    #+#             */
/*   Updated: 2026/07/03 10:09:29 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reverse(t_list **stack)
{
	t_list	*ultimo;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	ultimo = ft_lstlast((*stack));
	ultimo->prev->next = NULL;
	ft_lstadd_front(stack, ultimo);
}

void	rra(t_list **stack_a, t_bench *bench)
{
	reverse(stack_a);
	ft_printf("rra\n");
	bench->rra += 1;
	bench->total += 1;
}

void	rrb(t_list **stack_b, t_bench *bench)
{
	reverse(stack_b);
	ft_printf("rrb\n");
	bench->rrb += 1;
	bench->total += 1;
}

void	rrr(t_list **stack_a, t_list **stack_b, t_bench *bench)
{
	reverse(stack_a);
	reverse(stack_b);
	ft_printf("rrr\n");
	bench->rrr += 1;
	bench->total += 1;
}
