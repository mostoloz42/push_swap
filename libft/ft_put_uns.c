/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_uns.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 10:15:40 by mostoloz          #+#    #+#             */
/*   Updated: 2026/07/20 12:34:21 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_put_uns(unsigned int nmb, int fd)
{
	int		index;
	int		count;
	char	buffer[30];

	if (nmb == 0)
		return (write(fd, "0", 1));
	index = 0;
	count = 0;
	while (nmb > 0)
	{
		buffer[index] = (nmb % 10) + '0';
		nmb /= 10;
		index++;
		count ++;
	}
	ft_write_num_rev(index, buffer, fd);
	return (count);
}
