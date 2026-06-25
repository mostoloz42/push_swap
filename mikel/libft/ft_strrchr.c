/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 10:44:16 by mostoloz          #+#    #+#             */
/*   Updated: 2026/05/13 12:48:40 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int chr)
{
	char	*buffer;
	int		index;

	buffer = (char *) str;
	index = ft_strlen(buffer);
	while (chr > 256)
		chr -= 256;
	while (index > 0)
	{
		if (buffer[index] == chr)
			return (&buffer[index]);
		index--;
	}
	if (buffer[index] == chr)
		return (&buffer[index]);
	return (NULL);
}

/*
#include <stddef.h>
#include <stdio.h>
int main(void)
{
	char test[] = "amonguses fritosaa";
	printf("%s\n", ft_strrchr(test, 's'));
	printf("%p\n", ft_strrchr(test, '\0'));
	printf("%s", ft_strrchr(test, 'z'));
	return(0);
}
*/
