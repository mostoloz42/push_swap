/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nodos.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 17:28:25 by francysa          #+#    #+#             */
/*   Updated: 2026/07/06 18:06:19 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_front_t(t_stack **lst, t_stack *new)
{
	if (new && lst)
	{
		new->next = *lst;
		new->prev = NULL;
		if (*lst)
			(*lst)->prev = new;
		*lst = new;
	}
}

t_stack	*ft_lstlast_t(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next)
		lst = lst -> next;
	return (lst);
}

int	ft_lstsize_t(t_stack *lst)
{
	int	counter;

	counter = 0;
	if (!lst)
		return (0);
	while (lst -> next)
	{
		counter++;
		lst = lst -> next;
	}
	return (counter + 1);
}

void	ft_lstadd_back_t(t_stack **lst, t_stack *new)
{
	t_stack	*last_element;

	if (lst)
	{
		if (ft_lstsize_t(*lst) > 0)
		{
			last_element = ft_lstlast_t(*lst);
			new->prev = last_element;
			last_element -> next = new;
		}
		else
			ft_lstadd_front_t(lst, new);
	}
}

t_stack	*ft_lstnew_t(int content)
{
	t_stack	*element;

	element = malloc(sizeof(t_stack));
	if (!element)
		return (NULL);
	element -> content = content;
	element -> next = NULL;
	return (element);
}
