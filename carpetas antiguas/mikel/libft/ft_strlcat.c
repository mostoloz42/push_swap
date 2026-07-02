/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 11:10:08 by mostoloz          #+#    #+#             */
/*   Updated: 2026/05/13 12:46:17 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	index;
	size_t	dest_length;
	size_t	src_length;
	size_t	concat_num;

	index = 0;
	dest_length = ft_strlen(dest);
	src_length = ft_strlen(src);
	concat_num = size - dest_length - 1;
	if (dest_length >= size)
		return (size + src_length);
	while (src[index] && concat_num > 0)
	{
		dest[dest_length + index] = src[index];
		index++;
		concat_num--;
	}
	dest[dest_length + index] = '\0';
	return (dest_length + src_length);
}

/*
#include <stdio.h>
int main(void)
{
    char dest[20] = "hola ";
    char src[6] = "adios";
    printf("%li\n", ft_strlcat(dest, src, 20));
    printf("%s\n", dest);
}
*/
