/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 11:07:04 by mostoloz          #+#    #+#             */
/*   Updated: 2026/05/13 12:44:46 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int chr)
{
	char	*buffer;
	int		index;

	buffer = (char *) str;
	index = 0;
	while (chr > 256)
		chr -= 256;
	while (buffer[index])
	{
		if (buffer[index] == chr)
			return (&buffer[index]);
		index++;
	}
	if (buffer[index] == chr)
		return (&buffer[index]);
	return (NULL);
}

/*
#include <stdio.h>
int main(void)
{
    char test[] = "amonguses fritos";
    printf("%s\n", ft_strchr(test, 'a'));
    printf("%p\n", ft_strchr(test, '\0'));
    printf("%s", ft_strchr(test, 'z'));
    return(0);
}
*/
