/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 09:59:34 by mostoloz          #+#    #+#             */
/*   Updated: 2026/05/13 12:35:04 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next)
		lst = lst -> next;
	return (lst);
}

/*
#include <stdio.h>
int	main(void)
{
	t_list *lista;
	lista = NULL;
	ft_lstadd_front(&lista, ft_lstnew("skibidis"));
	ft_lstadd_front(&lista, ft_lstnew("skibidi2"));
	printf("%s\n", (char *) ft_lstlast(lista) -> content);
	return (0);
}
*/
