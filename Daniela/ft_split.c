#include "push_swap.h"

static size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (s[count])
		count++;
	return (count);
}

static char    *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t    count;
	char    *ptr;
	size_t    longitud_s;

	if (!s)
		return (0);
	longitud_s = ft_strlen(s);
	if (start >= longitud_s)
		len = 0;
	else if (len > longitud_s - start)
		len = longitud_s - start;
	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (0);
	count = 0;
	while (count < len && s[start + count] != '\0')
	{
		ptr[count] = s[start + count];
		count++;
	}
	ptr[count] = '\0';
	return (ptr);
}

static int	ft_word_counter(char const *s, char delimiter)
{
	int	i;
	int	count;
	int	key;

	i = 0;
	count = 0;
	key = 0;
	while (s[i])
	{
		if (s[i] == delimiter)
			key = 0;
		else if (key == 0)
		{
			key = 1;
			count++;
		}
		i++;
	}
	return (count);
}

static void	ft_free(char **res, size_t word)
{
	while (word > 0)
	{
		word--;
		free(res[word]);
	}
	free(res);
}

static char	**ft_fill(char **res, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			res[j] = ft_substr(s, start, i - start);
			if (!res[j])
				return (ft_free(res, j), NULL);
			j++;
		}
	}
	res [j] = NULL;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		n_word;

	if (!s)
		return (NULL);
	n_word = ft_word_counter(s, c);
	res = malloc(sizeof(char *) * (n_word + 1));
	if (!res)
		return (NULL);
	return (ft_fill(res, s, c));
}


/* #include <stdio.h>

int main(void)
{
	char    **r = ft_split("_Hello__World", '_');
	int        i = 0;

	if (!r)
		return (1);
	while (r[i])
	{
		printf("%s\n", r[i]);
		free(r[i++]);
	}
	free(r);
	return (0);
} */
