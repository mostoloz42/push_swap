/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 11:06:34 by mostoloz          #+#    #+#             */
/*   Updated: 2026/05/13 12:47:40 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(char const *s, char c)
{
	int	word_count;
	int	index;

	index = 0;
	word_count = 0;
	while (s[index])
	{
		if (s[index] != c && (index == 0 || s[index - 1] == c))
			word_count++;
		index++;
	}
	return (word_count);
}

static int	ft_word_len(char const *s, char c)
{
	int	index;

	index = 0;
	while (s[index] && s[index] != c)
		index++;
	return (index);
}

static void	*ft_free_all(char **arr)
{
	int	index;

	index = 0;
	while (arr[index])
	{
		free(arr[index]);
		index++;
	}
	free(arr);
	return (NULL);
}

static char	*ft_save_word(char const *s, int *word_index, char c)
{
	char	*word;
	int		word_len;

	word_len = ft_word_len(&s[*word_index], c);
	word = ft_substr(s, *word_index, word_len);
	*word_index += word_len;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		index;
	int		index_arr;

	index = 0;
	index_arr = 0;
	if (!s)
		return (NULL);
	arr = ft_calloc((ft_word_count(s, c) + 1), sizeof(char *));
	if (!arr)
		return (NULL);
	while (s[index])
	{
		if (s[index] != c && (index == 0 || s[index - 1] == c))
		{
			arr[index_arr] = ft_save_word(s, &index, c);
			if (!arr[index_arr])
				return (ft_free_all(arr));
			index_arr++;
		}
		else
			index++;
	}
	return (arr);
}

/*
#include <stdio.h>
int	main(void)
{
	int i = 0;
	char ** arr = ft_split("skiPbidiPtoilePt", 'P');
	while (arr[i])
		printf("%s\n", arr[i++]);
	return (0);
}
*/
