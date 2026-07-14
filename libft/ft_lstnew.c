/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 10:00:28 by mostoloz          #+#    #+#             */
/*   Updated: 2026/07/14 12:14:27 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*element;

	element = malloc(sizeof(t_list));
	if (!element)
		return (NULL);
	element -> content = content;
	element -> next = NULL;
	return (element);
}

/*
#include <stdio.h>
int main(void)
{
    t_list *prueba;
    prueba = ft_lstnew("skibidis");
    printf("%s", (char *) prueba -> content);
    return (0);
}
*/