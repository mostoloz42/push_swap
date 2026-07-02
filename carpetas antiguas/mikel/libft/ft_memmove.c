/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 10:02:44 by mostoloz          #+#    #+#             */
/*   Updated: 2026/05/13 12:37:33 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_move(unsigned char *d, const unsigned char *s, size_t n)
{
	size_t	index;

	if (d < s)
	{
		index = 0;
		while (index < n)
		{
			d[index] = s[index];
			index++;
		}
	}
	else
	{
		index = n;
		while (index > 0)
		{
			d[index - 1] = s[index - 1];
			index--;
		}
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned const char	*buffer_src;
	unsigned char		*buffer_dest;

	buffer_dest = (unsigned char *) dest;
	buffer_src = (const unsigned char *) src;
	if (buffer_dest == NULL && buffer_src == NULL)
		return (NULL);
	ft_move(buffer_dest, buffer_src, n);
	return (dest);
}

/*
#include <stdio.h>
int     main(void)
{
        char csrc[100] = "amonguses";
        ft_memmove(csrc+5, csrc, 15);            
        printf("%s", (char *) csrc);
        return 0;
}
*/
