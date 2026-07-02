/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 11:09:12 by mostoloz          #+#    #+#             */
/*   Updated: 2026/05/13 12:45:48 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	index;

	index = 0;
	if (s && f)
	{
		while (s[index])
		{
			(*f)(index, &s[index]);
			index++;
		}
	}
}

/*
void cifrar(unsigned int index, char* str)  
{
    str[index] += index;
}

#include <stdio.h>
int main(void)  
{
    char str[15] = "holaamongus";
    ft_striteri(str, cifrar);
    printf("%s\n", str);
    return (0);
}
*/
