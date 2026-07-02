/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 09:54:50 by mostoloz          #+#    #+#             */
/*   Updated: 2026/06/22 12:45:45 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_put_int(int nbr)
{
	char	*buffer;
	int		len;

	buffer = ft_itoa(nbr);
	len = ft_put_str(buffer);
	free(buffer);
	return (len);
}
