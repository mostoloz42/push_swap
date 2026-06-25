/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 09:56:13 by mostoloz          #+#    #+#             */
/*   Updated: 2026/05/13 12:32:22 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_size(int nmb)
{
	int	count;

	count = 0;
	if (nmb <= 0)
	{
		count++;
		nmb *= -1;
	}
	while (nmb != 0)
	{
		count++;
		nmb /= 10;
	}
	return (count);
}

static int	ft_absolute(int nmb)
{
	if (nmb < 0)
		nmb *= -1;
	return (nmb);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		index;
	int		size;

	size = ft_get_size(n);
	index = size;
	str = malloc((size + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		index--;
		str[0] = '-';
	}
	while (index > 0)
	{
		if (n < 0)
			str[index] = (ft_absolute(n % 10) + '0');
		else
			str[index - 1] = (ft_absolute(n % 10) + '0');
		n /= 10;
		index--;
	}
	str[size] = '\0';
	return (str);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%s\n", ft_itoa(2147483646));
}
*/
