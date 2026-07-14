/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 09:57:41 by mostoloz          #+#    #+#             */
/*   Updated: 2026/07/03 12:35:03 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst)
{
	t_list	*buffer;

	if (lst)
	{
		while (*lst)
		{
			buffer = (*lst)-> next;
			ft_lstdelone(*lst);
			*lst = buffer;
		}
		*lst = NULL;
		free(*lst);
	}
	ft_lstdelone(buffer);
}

/*
void	del(void *content)
{
	content = NULL;
	free(content);
}

#include <stdio.h>
int	main(void)
{
	t_list  *prueba;
	t_list	*lista;
	lista = NULL;
	ft_lstadd_front(&lista, ft_lstnew("skibidis"));
    	ft_lstadd_front(&lista, ft_lstnew("skibidi2"));
    	printf("%s\n", (char *) lista -> content);
    	ft_lstclear(&lista, del);
    	printf("%s\n", (char *) lista -> content);
    	return (0);
}
*/
