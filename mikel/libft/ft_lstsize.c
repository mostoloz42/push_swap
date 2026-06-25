/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 10:00:49 by mostoloz          #+#    #+#             */
/*   Updated: 2026/05/13 12:36:24 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
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

/*
int main(void)
{
	t_list *lista;
	lista = NULL;
	ft_lstadd_front(&lista, ft_lstnew("skibidis"));
	ft_lstadd_front(&lista, ft_lstnew("skibidi2"));
	printf("%d\n", ft_lstsize(lista));
	return (0);
}
*/
