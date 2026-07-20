/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 09:54:50 by mostoloz          #+#    #+#             */
/*   Updated: 2026/07/20 12:29:27 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_put_int(int nbr, int fd)
{
	char	*buffer;
	int		len;

	buffer = ft_itoa(nbr);
	len = ft_put_str(buffer, fd);
	free(buffer);
	return (len);
}
