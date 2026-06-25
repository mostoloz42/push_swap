/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 10:46:12 by mostoloz          #+#    #+#             */
/*   Updated: 2026/05/13 12:48:54 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	actual_len;
	int		index;

	index = start;
	actual_len = 0;
	if (!s)
		return (NULL);
	if (start > (unsigned) ft_strlen(s))
		return (ft_strdup(""));
	while (s[index] && actual_len < len)
	{
		index++;
		actual_len++;
	}
	substr = malloc(actual_len + 1);
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, &s[start], actual_len + 1);
	return (substr);
}

/*
#include <stdio.h>
int main(void)
{
    printf("%s\n", ft_substr("stibidi toile", 3, 4));
}
*/
