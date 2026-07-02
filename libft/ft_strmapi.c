/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 11:13:02 by mostoloz          #+#    #+#             */
/*   Updated: 2026/05/13 12:47:34 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str_buffer;
	int		index;

	index = 0;
	if (!s || !f)
		return (NULL);
	str_buffer = malloc(ft_strlen(s) + 1 * sizeof(char));
	if (!str_buffer)
		return (NULL);
	while (s[index])
	{
		str_buffer[index] = f(index, s[index]);
		index++;
	}
	str_buffer[index] = '\0';
	return (str_buffer);
}

/*
char cifrar(unsigned int index, char car)  
{
    return (car+index);
}

#include <stdio.h>
int main(void)  
{
    printf("%s\n", ft_strmapi("holaamongus", cifrar));
    return (0);
}
*/
