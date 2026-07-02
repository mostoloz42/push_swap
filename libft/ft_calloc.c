/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 09:47:42 by mostoloz          #+#    #+#             */
/*   Updated: 2026/05/13 12:24:32 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmb, size_t size)
{
	unsigned char	*p;
	size_t			index;

	index = 0;
	if (nmb != 0 && size > (size_t) -1 / nmb)
		return (NULL);
	p = malloc(nmb * size);
	if (!p)
		return (NULL);
	while (index < nmb * size)
		p[index++] = 0;
	return ((void *) p);
}

/*
int	main(void)
{
	void	*prueba=ft_calloc(5,5);
	printf("%p", prueba);
}
*/
