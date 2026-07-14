/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 09:59:57 by mostoloz          #+#    #+#             */
/*   Updated: 2026/07/14 12:13:46 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_content = f(lst -> content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst -> next;
	}
	return (new_list);
}

/*
#include <stdio.h>
void	*print_chars(void *content)
{
	int	index;
	char *buffer = (char *)content;
	
	index = 0;
	while (buffer[index])
	{
	    printf("%c\n", buffer[index]);
		index++;
	}
	return (buffer);
}

void	del(void *content)
{
	content = NULL;
	free(content);
}

int	main(void)
{
	t_list	*lista;
	t_list	*lista_nueva;
	lista = NULL;
	ft_lstadd_front(&lista, ft_lstnew("skibidis"));
   	ft_lstadd_front(&lista, ft_lstnew("skibidi2"));
    	lista_nueva = ft_lstmap(lista, print_chars, del);
    	printf("%s\n", (char *) lista -> content);
    	return (0);
}
*/