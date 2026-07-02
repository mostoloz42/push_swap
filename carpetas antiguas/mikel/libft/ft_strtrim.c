/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 10:45:39 by mostoloz          #+#    #+#             */
/*   Updated: 2026/05/13 12:48:50 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_set(char const *set, char const chara)
{
	int	matches;
	int	index;

	index = 0;
	matches = 0;
	while (set[index] && matches == 0)
	{
		if (chara == set[index])
			matches = 1;
		else
			index++;
	}
	return (matches);
}

static int	ft_trim_start(char const *s1, char const *set)
{
	int	index;
	int	found;

	index = 0;
	found = 0;
	while (s1[index] && found == 0)
	{
		if (ft_check_set(set, s1[index]) == 0)
			found = 1;
		else
			index++;
	}
	return (index);
}

static int	ft_trim_end(char const *s1, char const *set)
{
	int	index;
	int	counter;
	int	found;

	index = ft_strlen(s1) - 1;
	counter = 0;
	found = 0;
	while (s1[index] && found == 0)
	{
		if (ft_check_set(set, s1[index]) == 0)
			found = 1;
		else
		{
			counter++;
			index--;
		}
	}
	return (counter);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	newlen;
	char	*buffer;
	int		s1len;
	int		indexstart;
	int		indexend;

	if (!s1 || !set)
		return (NULL);
	indexstart = ft_trim_start(s1, set);
	if (indexstart >= ft_strlen(s1))
		return (ft_strdup(""));
	indexend = ft_trim_end(s1, set);
	s1len = ft_strlen(s1);
	buffer = malloc((s1len - indexstart - indexend) + 1);
	if (!buffer)
		return (NULL);
	newlen = ft_strlen(&s1[indexstart]) - indexend;
	ft_strlcpy(buffer, &s1[indexstart], newlen + 1);
	return (buffer);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%s", ft_strtrim("accabababbaHello Worldbabbabaa", "abc"));
	return (0);
}
*/
