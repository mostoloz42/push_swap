/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 09:54:07 by mostoloz          #+#    #+#             */
/*   Updated: 2026/05/13 12:25:30 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	int	result;

	result = 1;
	if (c < 'A')
		result = 0;
	else if (c > 'Z' && c < 'a')
		result = 0;
	else if (c > 'z')
		result = 0;
	return (result);
}

/*
#include <stdio.h>
int	main (void)
{
	printf("test a: %d\n", ft_isalpha('a'));
	printf("test 0: %d\n", ft_isalpha('0'));
}
*/
