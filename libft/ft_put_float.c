/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_float.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 11:54:41 by mostoloz          #+#    #+#             */
/*   Updated: 2026/07/17 12:16:00 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_put_float(float nbr)
{
	char	*buffer;
	int		len;

	buffer = ft_ftoa(nbr); //multiplicar la parte decimal por 10 dos veces (o 3 si queremos aproximar) para sacar los 2 decimales que necesitamos
	len = ft_put_str(buffer);
	free(buffer);
	return (len);
}
