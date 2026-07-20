/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_num_rev.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 10:16:19 by mostoloz          #+#    #+#             */
/*   Updated: 2026/07/20 12:25:08 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_write_num_rev(int index, char *buffer, int fd)
{
	while (index > 0)
	{
		index--;
		ft_put_char(buffer[index], fd);
	}
}
