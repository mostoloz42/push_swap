/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 09:59:08 by mostoloz          #+#    #+#             */
/*   Updated: 2026/05/13 12:33:38 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst && f)
	{
		while (lst)
		{
			(*f)(lst -> content);
			lst = lst -> next;
		}
	}
}

/*
#include <stdio.h>
void	printear(void *content)
{
	printf("%s\n", content);
}


int	main(void)
{
	t_list  *prueba;
	t_list	*lista;
	lista = NULL;
	ft_lstadd_front(&lista, ft_lstnew("skibidis"));
	ft_lstadd_front(&lista, ft_lstnew("skibidi2"));
	ft_lstiter(lista, printear);
	return (0);
}
*/
