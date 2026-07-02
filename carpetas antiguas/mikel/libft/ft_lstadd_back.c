/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 09:56:48 by mostoloz          #+#    #+#             */
/*   Updated: 2026/05/13 12:35:44 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_element;

	if (lst)
	{
		if (ft_lstsize(*lst) > 0)
		{
			last_element = ft_lstlast(*lst);
			last_element -> next = new;
		}
		else
			ft_lstadd_front(lst, new);
	}
}

/*
#include <stdio.h>
int main(void)
{
    t_list *lista;
    lista = NULL;
    ft_lstadd_back(&lista, ft_lstnew("skibidis"));
    printf("%s\n", (char *) ft_lstlast(lista) -> content);
    ft_lstadd_back(&lista, ft_lstnew("skibidi2"));
    printf("%s\n", (char *) ft_lstlast(lista) -> content);
    return (0);
}
*/
