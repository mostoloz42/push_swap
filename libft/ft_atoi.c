/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 09:45:24 by mostoloz          #+#    #+#             */
/*   Updated: 2026/05/13 12:22:46 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	size_t	index;
	int		result;
	int		negative;

	negative = 1;
	index = 0;
	while (nptr[index] == ' ' || (nptr[index] >= 9 && nptr[index] <= 13))
		index++;
	if (nptr[index] == '-' || nptr[index] == '+')
	{
		if (nptr[index] == '-')
			negative = -1;
		index++;
	}
	result = 0;
	while (nptr[index] && ft_isdigit(nptr[index]) == 1)
	{
		result = result * 10 + (nptr[index] - '0');
		index++;
	}
	return (result * negative);
}

/*
#include <stdio.h>
int     main(void)
{
    printf("%d\n", ft_atoi("124312"));
    printf("%d\n", ft_atoi("124a312"));
    printf("%d\n", ft_atoi("a124312"));
}
*/
