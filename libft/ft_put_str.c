/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 12:28:06 by mostoloz          #+#    #+#             */
/*   Updated: 2026/07/20 12:20:38 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_put_str(char *str, int fd)
{
	int	index;

	index = 0;
	if (str == NULL)
		return (write(fd, "(null)", 6));
	while (str[index])
		write(fd, &str[index++], 1);
	return (index);
}
