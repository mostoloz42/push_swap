/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 11:07:27 by mostoloz          #+#    #+#             */
/*   Updated: 2026/05/13 12:45:15 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*duplicate;
	int		index;
	int		len;

	index = 0;
	len = ft_strlen(s);
	duplicate = malloc(len + 1);
	if (!duplicate)
		return (NULL);
	while (index < len)
	{
		duplicate[index] = s[index];
		index++;
	}
	duplicate[index] = '\0';
	return (duplicate);
}

/*
#include <stdio.h>
int	main(void)
{
	char	prueba[15] = "amonguses";
	char	*prueba2;
	prueba2 = ft_strdup(prueba);
	printf("%s", prueba2);
}
*/
