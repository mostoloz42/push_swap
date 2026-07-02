/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translate_hex_up.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 12:23:14 by mostoloz          #+#    #+#             */
/*   Updated: 2026/06/22 12:45:45 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	translate_hex_up(int result)
{
	if (result == 10)
		return ('A');
	else if (result == 11)
		return ('B');
	else if (result == 12)
		return ('C');
	else if (result == 13)
		return ('D');
	else if (result == 14)
		return ('E');
	else
		return ('F');
}
