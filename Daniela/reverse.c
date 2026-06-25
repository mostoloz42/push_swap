/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 10:48:14 by francysa          #+#    #+#             */
/*   Updated: 2026/06/25 13:28:31 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>

/* typedef struct	s_list
{
	int			*content;
	struct	s_list	*next;
}				t_list;*/	
 
void	push(t_list **src, t_list **dst)
{
	t_list	*nodo_one;

	if (!src || !*dst)
		return ;
	nodo_one = *dst;
	*dst = (*dst)->next;
	nodo_one->next = *src;
	*src = nodo_one;
}

void	reverse_a(t_list **stack_a)
{
	t_list	*anterior;
	t_list	*ultimo;

	if (!stack_a || !*stack_a)
		return ;
	anterior = NULL;
	ultimo = *stack_a;
	while (ultimo->next != NULL)
	{
		anterior = ultimo;
		ultimo = ultimo->next;
	}
	anterior->next = NULL;
	ultimo->next = *stack_a;
	*stack_a = ultimo;
}

void	reverse_b(t_list **stack_b)
{
	t_list	*anterior;
	t_list	*ultimo;

	if (!stack_b || !*stack_b)
		return ;
	anterior = NULL;
	ultimo = *stack_b;
	while (ultimo->next != NULL)
	{
		anterior = ultimo;
		ultimo = ultimo->next;
	}
	anterior->next = NULL;
	ultimo->next = *stack_b;
	*stack_b = ultimo;
}

void	reverse(t_list **stack_a, t_list **stack_b)
{
	reverse_a(stack_a);
	reverse_b(stack_b);
}

int	main(void)
{
	int val1 = 1, val2 = 2, val3 = 3, val4 = 4, val5 = 5, val6 = 6, val7 = 7, val8 = 8;
	
	t_list n1, n2, n3, n4, n5, n6, n7, n8;

	// Stack A
	n1.content = &val1; n1.next = &n2;
	n2.content = &val2; n2.next = &n3;
	n3.content = &val3; n3.next = &n4;
	n4.content = &val4; n4.next = NULL;

	// Stack B
	n5.content = &val5; n5.next = &n6;
	n6.content = &val6; n6.next = &n7;
	n7.content = &val7; n7.next = &n8;
	n8.content = &val8; n8.next = NULL;
	
	t_list *stack_a = &n1;
	t_list *stack_b = &n5;
	t_list *aux;

	printf("Stack A: ");
	aux = stack_a;
	while (aux != NULL)
	{
		printf("[%d] -> ", *(aux->content));
		aux = aux->next;
	}
	reverse(&stack_a, &stack_b);
	printf("Despues\n");
	aux = stack_a;
	while (aux != NULL)
	{
		printf("[%d] -> ", *(aux->content));
		aux = aux->next;
	}
	printf("NULL\n");

	printf("Stack B: ");
	aux = stack_b;
	while (aux != NULL)
	{
		printf("[%d] -> ", *(aux->content));
		aux = aux->next;
	}
	printf("NULL\n");
	return (0);
}