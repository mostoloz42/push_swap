/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   select_intermedio.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 16:06:53 by francysa          #+#    #+#             */
/*   Updated: 2026/07/09 11:34:42 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 1)
		return (0);
	i = 1;
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (i - 1);
}

int	ft_sqrt_aux(t_stack *stack_a)
{
	t_stack	*nodo;
	int	i;
	int	j;
	
	nodo = stack_a;
	i = 0;
	while(nodo->next != NULL)
	{
		i++;
		nodo = nodo->next;
	}
	j = ft_sqrt(i);
	return (j);
}

void	chuncks(t_stack **stack_a, t_bench *bench)
{
	t_stack	**stack_b;
	t_stack	*nodo_actual;
	int	j;

	stack_b = malloc(sizeof(t_list *));
	j = ft_sqrt_aux(*stack_a);
	indexacion(*stack_a);
	nodo_actual = *stack_a;
	while (nodo_actual)
	{
		if (nodo_actual->index <= j)
		{
			pb(stack_a, stack_b, bench);
			if (nodo_actual->index <= (j / 2))
				rb(stack_b, bench);
		}
		nodo_actual = *stack_a;
		ra(stack_a, bench);
	}
}

/* int	main(void)
{
	int val1 = 100, val2 = -2, val3 = 30, val4 = 4;
	
	t_stack n1, n2, n3, n4;

	// Stack A
	n1.content = &val1; n1.next = &n2; n1.prev = NULL;
	n2.content = &val2; n2.next = &n3; n2.prev = &n1;
	n3.content = &val3; n3.next = &n4; n3.prev = &n2;
	n4.content = &val4; n4.next = NULL; n4.prev =&n3;
	
	t_stack *stack_a = &n1;
	t_stack *aux;

	printf("Stack A: ");
	aux = stack_a;
	while (aux != NULL)
	{
		printf("[%d] -> ", *(aux->content));
		aux = aux->next;
	}
	printf("\nDespues\n");
	aux = stack_a;
	t_index(aux);
	while (aux != NULL)
	{
		printf("Valor: %d (Index: %d) -> \n", *(aux->content), aux->t_index);
		aux = aux->next;
	}
	return (0);
} */
/* void selection_sort(t_stack *stack_a)
{
	t_stack	*i;
	t_stack	*j;
	t_stack	*min_nodo;
	int		tem;
	
	i = stack_a;
	while (i != NULL && i->next =! NULL)
	{
		min_nodo = i;
		j = i->next;
		while (j != NULL)
		{
			if(j->content < min_nodo->content)
			min_nodo = j;
			j = j->next;
		}
		if (min_nodo != i)
		{
			tem = i->content;
			i->content = min_nodo->content;
			min_nodo->content = tem;
		}
		i = i->next;
	}
} */