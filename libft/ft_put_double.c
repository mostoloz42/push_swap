/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_double.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 11:54:41 by mostoloz          #+#    #+#             */
/*   Updated: 2026/07/21 12:07:36 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_put_double(double nbr, int fd)
{
	int	integer_part;
	int	count;
	int index;

	index = 0;
	integer_part = (int)nbr;
	count = ft_printf("%d.", fd, integer_part);
	while (index < 2)
	{
		nbr = (nbr - integer_part) * 10;
		integer_part = (int)nbr;
		count += ft_printf("%d", fd, integer_part);
		index++;
	}
	return (count);
}
