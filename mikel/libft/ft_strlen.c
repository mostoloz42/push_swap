/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 11:11:19 by mostoloz          #+#    #+#             */
/*   Updated: 2026/05/13 12:47:17 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("test 55555: %d\n", ft_strlen("55555"));
	printf("test vacio: %d\n", ft_strlen(""));
	printf("test abdegasd: %d\n", ft_strlen("abdegasd"));
}
*/
