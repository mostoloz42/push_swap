/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 10:02:23 by mostoloz          #+#    #+#             */
/*   Updated: 2026/05/13 12:37:40 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned const char	*buffer_src;
	unsigned char		*buffer_dest;
	size_t				index;

	index = 0;
	buffer_dest = (unsigned char *) dest;
	buffer_src = (const unsigned char *) src;
	if (buffer_dest == NULL && buffer_src == NULL)
		return (NULL);
	while (index < n)
	{
		buffer_dest[index] = buffer_src[index];
		index++;
	}
	return (dest);
}

/*
#include <stdio.h>
int main(void)
{
	char	str_src[11] = "holabuenas";
	char	str_dest[10] = "amonguses";
	ft_memcpy(str_dest, str_src, 4);
	printf("%s", (char *) str_dest);
}
*/
