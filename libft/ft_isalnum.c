/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 09:53:41 by mostoloz          #+#    #+#             */
/*   Updated: 2026/05/13 12:25:06 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("test 0: %d\n", ft_isalnum('0'));
	printf("test a: %d\n", ft_isalnum('a'));
	printf("test A: %d\n", ft_isalnum('A'));
	printf("test <: %d\n", ft_isalnum('<'));
}
*/
