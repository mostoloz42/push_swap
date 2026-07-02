/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 11:13:26 by mostoloz          #+#    #+#             */
/*   Updated: 2026/05/13 12:50:55 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t size)
{
	size_t	index;
	int		result;

	index = 0;
	result = 0;
	while (index < size && result == 0)
	{
		if ((unsigned) str1[index] < (unsigned) str2[index])
			result = -1;
		else if ((unsigned) str1[index] > (unsigned) str2[index])
			result = 1;
		index++;
	}
	return (result);
}

/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    printf("%d\n", ft_strncmp("abc", "abcfe", 5));
    printf("%d\n", strncmp("abc", "abcfe", 5));
    return(0);
}
*/
