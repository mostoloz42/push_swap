/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 10:43:34 by mostoloz          #+#    #+#             */
/*   Updated: 2026/05/13 12:48:31 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	index_big;
	size_t	index_little;

	index_big = 0;
	index_little = 0;
	if (!little[0])
		return ((char *) big);
	while (big[index_big] && index_big < len)
	{
		while (little[index_little]
			&& big[index_big + index_little] == little[index_little]
			&& index_big + index_little < len)
		{
			index_little++;
			if (!little[index_little])
				return ((char *) big + index_big);
		}
		index_big++;
		index_little = 0;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>
int main(void)
{  
    printf("%s\n", ft_strnstr("amongus", "", 8));
    printf("%s\n", ft_strnstr("amongus", "mong", 8));
    printf("%s\n", ft_strnstr("amamongus", "mong", 10));
    printf("%s\n", ft_strnstr("amongus", "mong", 3));
}
*/
