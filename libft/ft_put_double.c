/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_double.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 11:54:41 by mostoloz          #+#    #+#             */
/*   Updated: 2026/07/20 12:31:51 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_put_double(double nbr, int fd)
{
	int	integer_part;
	int	count;

	integer_part = (int)nbr;
	count = ft_printf("%d.", fd, integer_part);
	nbr = (nbr - integer_part) * 10;
	integer_part = (int)nbr;
	count += ft_printf("%d", fd, integer_part);
	nbr = (nbr - integer_part) * 10;
	integer_part = (int)nbr;
	if (((nbr - integer_part) * 10) >= 5)
		count += ft_printf("%d", fd, integer_part + 1);
	else
		count += ft_printf("%d", fd, integer_part);
	return (count);
}
