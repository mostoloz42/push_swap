/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 10:02:03 by mostoloz          #+#    #+#             */
/*   Updated: 2026/05/13 12:36:53 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t size)
{
	unsigned char	*buffer1;
	unsigned char	*buffer2;
	size_t			index;
	int				result;

	buffer1 = (unsigned char *) str1;
	buffer2 = (unsigned char *) str2;
	index = 0;
	result = 0;
	while (index < size && result == 0)
	{
		result = buffer1[index] - buffer2[index];
		index++;
	}
	return (result);
}

/*
#include <string.h>
#include <stdio.h>
int main(void)
{
    printf("%d %d\n", ft_memcmp("abc", "abc", 4), memcmp("abc", "abc", 4));
    printf("%d %d\n", ft_memcmp("zbc", "abc", 4), memcmp("zbc", "abc", 4));
    printf("%d %d",ft_memcmp("abc", "abz", 4), memcmp("abc", "abz", 4));
    return(0);
}
*/
