/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 11:09:33 by mostoloz          #+#    #+#             */
/*   Updated: 2026/05/13 12:45:53 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*buffer;
	int		s1len;
	int		s2len;

	if (!s1 || !s2)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	buffer = malloc(s1len + s2len + 1);
	if (!buffer)
		return (NULL);
	ft_strlcpy(buffer, s1, s1len + 1);
	ft_strlcat(buffer, s2, s1len + s2len + 1);
	return (buffer);
}

/*
#include <stdio.h>
int	main (void)
{
	printf("%s\n", ft_strjoin("skibidi_", "toile");
	printf("%s\n", ft_strjoin("jamo", "nguis");
}
*/
