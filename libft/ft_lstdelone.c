/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 09:58:42 by mostoloz          #+#    #+#             */
/*   Updated: 2026/07/03 12:23:30 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst)
{
	if (lst)
	{
		lst->content = NULL;
		free(lst->content);
		free(lst);
	}
}

/*
void	del(void *content)
{
	content = NULL;
	free(content);
}

#include <stdio.h>
int main(void)
{
    t_list  *prueba;
    prueba = ft_lstnew("amonguses");
    printf("%s\n", (char *) prueba -> content);
    ft_lstdelone(prueba, del);
    printf("%s\n", (char *) prueba -> content);
    return (0);
}
*/
