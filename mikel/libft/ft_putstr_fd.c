/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 11:06:08 by mostoloz          #+#    #+#             */
/*   Updated: 2026/05/13 12:39:28 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	index;

	index = 0;
	if (s)
	{
		while (s[index])
			write(fd, &s[index++], 1);
	}
}

/*
int	main(void)
{
	ft_putstr_fd("hola", 1);
}
*/
