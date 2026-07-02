/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 10:01:22 by mostoloz          #+#    #+#             */
/*   Updated: 2026/05/13 12:36:47 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int chr, size_t size)
{
	unsigned char	*buffer;
	size_t			index;

	buffer = (unsigned char *) str;
	index = 0;
	while (index < size)
	{
		if ((unsigned char) buffer[index] == (unsigned char) chr)
			return ((void *) &buffer[index]);
		index++;
	}
	return (NULL);
}

/*
#include <stdio.h>
int main(void)
{
    char test[] = "amonguses fritos";
    printf("%s\n", ft_memchr(test, 'g', 17));
    printf("%p\n", ft_memchr(test, '\0', 17));
    printf("%s", ft_memchr(test, 'z', 17));
    return(0);
}
*/
