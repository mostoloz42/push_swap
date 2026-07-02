/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 11:06:46 by mostoloz          #+#    #+#             */
/*   Updated: 2026/05/13 12:23:30 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*buffer;

	i = 0;
	buffer = (unsigned char *) s;
	while (i < n)
	{
		buffer[i] = '\0';
		i++;
	}
}

/*
#include <stdio.h>
int	main(void)
{
	char str[10] = "amonguses";

	ft_bzero(str, 3);
	printf("%p\n", str);
}
*/
