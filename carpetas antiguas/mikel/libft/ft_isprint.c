/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 09:55:52 by mostoloz          #+#    #+#             */
/*   Updated: 2026/05/13 12:32:15 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	else
		return (0);
}

/*
#include <stdio.h>
int	main (void)
{
	printf("test NULL: %d\n", ft_isprint('\0'));
	printf("test 3: %d\n", ft_isprint('3'));
}
*/
