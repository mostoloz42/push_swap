/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 10:48:14 by francysa          #+#    #+#             */
/*   Updated: 2026/06/30 16:43:03 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>
 
void	push(t_list **src, t_list **dst)
{
	t_list	*nodo_one;

	if (!src || !*src)
		return ;
	nodo_one = *src;
	*src = (*src)->next;
	if (*src)
		(*src)->prev = NULL;
	nodo_one->next = *dst;
	nodo_one->prev = NULL;
	if (*dst)
		(*dst)->prev = nodo_one;
	*dst = nodo_one;
}

void	reverse_a(t_list **stack_a)
{
	t_list	*ultimo;

	if (!stack_a || !*stack_a || !(*stack_a)->next)
		return ;
	ultimo = *stack_a;
	while (ultimo->next != NULL)
	{
		ultimo = ultimo->next;
	}
	ultimo->prev->next = NULL;
	ultimo->next = *stack_a;
	(*stack_a)->prev = ultimo;
	ultimo->prev = NULL; 
	*stack_a = ultimo;
}

void	reverse_b(t_list **stack_b)
{
	t_list	*ultimo;

	if (!stack_b || !*stack_b || !(*stack_b)->next)
		return ;
	ultimo = *stack_b;
	while (ultimo->next != NULL)
	{
		ultimo = ultimo->next;
	}
	ultimo->prev->next = NULL;
	ultimo->next = *stack_b;
	(*stack_b)->prev = ultimo;
	ultimo->prev = NULL;
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
	n1.content = &val1; n1.next = &n2; n1.prev = NULL;
	n2.content = &val2; n2.next = &n3; n2.prev = &n1;
	n3.content = &val3; n3.next = &n4; n3.prev = &n2;
	n4.content = &val4; n4.next = NULL; n4.prev =&n3;

	// Stack B
	n5.content = &val5; n5.next = &n6; n5.prev = NULL;
	n6.content = &val6; n6.next = &n7; n6.prev = &n5;
	n7.content = &val7; n7.next = &n8;n7.prev = &n6;
	n8.content = &val8; n8.next = NULL; n8.prev = &n7;
	
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
/* 	push(&stack_a, &stack_b); // probar push
	
	printf("Despues\n");
	printf("Nuevo primero de B: %d\n", *(stack_b->content));
	printf("Nuevo primero de A: %d\n", *(stack_a->content)); */ // hasta aqui 
	reverse(&stack_a, &stack_b); //Probar revers
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