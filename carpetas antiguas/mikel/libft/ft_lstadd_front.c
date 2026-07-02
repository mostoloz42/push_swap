/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 09:57:18 by mostoloz          #+#    #+#             */
/*   Updated: 2026/05/13 12:35:58 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new && lst)
	{
		new -> next = *lst;
		*lst = new;
	}
}

/*
#include <stdio.h>
int main(void)
{
    t_list *lista;
    lista = NULL;
    ft_lstadd_front(&lista, ft_lstnew("skibidis"));
    printf("%s\n", (char *) lista -> content);
    ft_lstadd_front(&lista, ft_lstnew("skibidi2"));
    printf("%s\n", (char *) lista -> content);
    return (0);
}
*/
