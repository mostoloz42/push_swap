/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 11:03:19 by mostoloz          #+#    #+#             */
/*   Updated: 2026/05/13 12:37:52 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			index;
	unsigned char	*buffer;

	index = 0;
	buffer = (unsigned char *) s;
	while (index < n)
	{
		buffer[index] = c;
		index++;
	}
	return (s);
}

/*
#include <stdio.h>
int	main(void)
{
	char str[10] = "amonguses";

	ft_memset(str, 48, 3);
	printf("%s\n", (char *) str);
}
*/
