/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 11:10:55 by mostoloz          #+#    #+#             */
/*   Updated: 2026/05/13 12:47:03 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	index;
	size_t	length;

	index = 0;
	length = ft_strlen(src);
	if (size > 0)
	{
		while (index < size - 1 && *src)
		{
			dest[index] = *src;
			index++;
			src++;
		}
		dest[index] = '\0';
	}
	return (length);
}

/*
#include <stdio.h>
int	main(void)
{
	char	src[22]="123456789012345678901";
	char	dest[10]="";

	printf("%d\n",ft_strlcpy(dest, src, 4));
	printf("%s\n", dest);
}
*/
