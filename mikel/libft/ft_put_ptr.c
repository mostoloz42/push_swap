/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 12:43:27 by mostoloz          #+#    #+#             */
/*   Updated: 2026/06/22 12:45:45 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_put_hex_long(unsigned long nmb)
{
	char	buffer[30];
	int		count;
	int		index;
	int		result;

	if (nmb == 0)
		return (write(1, "0", 1));
	index = 0;
	count = 0;
	while (nmb > 0)
	{
		result = nmb % 16;
		if (result > 9)
			buffer[index] = translate_hex_low(result);
		else
			buffer[index] = result + '0';
		nmb /= 16;
		index++;
		count ++;
	}
	ft_write_num_rev(index, buffer);
	return (count);
}

int	ft_put_ptr(void *ptr) //pasar a hexadecimal y escribir un "0x" delante
{
	int		count;

	if (!ptr)
		return (write(1, "(nil)", 5));
	ft_put_str("0x");
	count = 2;
	count += ft_put_hex_long((long) ptr);
	return (count);
}
