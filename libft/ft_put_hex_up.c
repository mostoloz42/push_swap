/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex_up.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 12:25:34 by mostoloz          #+#    #+#             */
/*   Updated: 2026/07/20 12:37:13 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_put_hex_up(unsigned int nmb, int fd)
{
	char	buffer[30];
	int		count;
	int		index;
	int		result;

	if (nmb == 0)
		return (write(fd, "0", 1));
	index = 0;
	count = 0;
	while (nmb > 0)
	{
		result = nmb % 16;
		if (result > 9)
			buffer[index] = translate_hex_up(result);
		else
			buffer[index] = result + '0';
		nmb /= 16;
		index++;
		count ++;
	}
	ft_write_num_rev(index, buffer, fd);
	return (count);
}
