/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translate_hex_low.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 11:53:02 by mostoloz          #+#    #+#             */
/*   Updated: 2026/06/22 12:45:45 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	translate_hex_low(int result)
{
	if (result == 10)
		return ('a');
	else if (result == 11)
		return ('b');
	else if (result == 12)
		return ('c');
	else if (result == 13)
		return ('d');
	else if (result == 14)
		return ('e');
	else
		return ('f');
}
