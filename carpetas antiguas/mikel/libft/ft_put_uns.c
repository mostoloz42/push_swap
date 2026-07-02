/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_uns.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 10:15:40 by mostoloz          #+#    #+#             */
/*   Updated: 2026/06/22 12:45:45 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_put_uns(unsigned int nmb)
{
	int		index;
	int		count;
	char	buffer[30];

	if (nmb == 0)
		return (write(1, "0", 1));
	index = 0;
	count = 0;
	while (nmb > 0)
	{
		buffer[index] = (nmb % 10) + '0';
		nmb /= 10;
		index++;
		count ++;
	}
	ft_write_num_rev(index, buffer);
	return (count);
}
