/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 09:55:31 by mostoloz          #+#    #+#             */
/*   Updated: 2026/05/13 12:26:00 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	int	result;

	result = 1;
	if (c < '0' || c > '9')
		result = 0;
	return (result);
}

/*
#include <stdio.h>
int	main (void)
{
	printf("test 0: %d\n", ft_isdigit('0'));
	printf("test a: %d\n", ft_isdigit('a'));
}
*/
