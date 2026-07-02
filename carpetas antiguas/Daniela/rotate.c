/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 11:03:31 by mostoloz          #+#    #+#             */
/*   Updated: 2026/07/01 18:01:06 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_list **stack_a)
{
	t_list	*nuevo;
	t_list	*ultimo;

	if (!stack_a || !(*stack_a) || !((*stack_a)->next))
		return ;
	nuevo = (*stack_a)->next;
	ultimo = *stack_a;
	while (ultimo->next != NULL)
	{
		ultimo = ultimo->next;
	}
	nuevo->prev = NULL;
	ultimo->next = (*stack_a);
	(*stack_a)->prev = ultimo;
	(*stack_a)->next = NULL;
	*stack_a = nuevo;
}

/* int	main(void)
{
	int val1 = 1, val2 = 2, val3 = 3, val4 = 4;
	
	t_list n1, n2, n3, n4;

	// Stack A
	n1.content = &val1; n1.next = &n2; n1.prev = NULL;
	n2.content = &val2; n2.next = &n3; n2.prev = &n1;
	n3.content = &val3; n3.next = &n4; n3.prev = &n2;
	n4.content = &val4; n4.next = NULL; n4.prev =&n3;
	
	t_list *stack_a = &n1;
	t_list *aux;

	printf("Stack A: ");
	aux = stack_a;
	while (aux != NULL)
	{
		printf("[%d] -> ", *(aux->content));
		aux = aux->next;
	} 
	rotate_a(&stack_a);
	printf("\nDespues\n");
	
	aux = stack_a;
	printf("Stack A: ");
	while (aux != NULL)
	{
		printf("[%d] -> ", *(aux->content));
		aux = aux->next;
	}
	printf("NULL\n");
	return (0);
}  */