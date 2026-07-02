/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 15:06:31 by francysa          #+#    #+#             */
/*   Updated: 2026/07/02 12:17:49 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_min_max(long result)
{
	if (result > 2147483647 || result < -2147483648)
		return (0);
	return (1);
}

long	ft_atol(const char *str)
{
	long	count;
	long	result;
	long	sign;

	count = 0;
	result = 0;
	sign = 1;
	while (str[count] == ' ' || (str[count] >= 9 && str[count] <= 13))
		count++;
	if (str[count] == '-')
	{
		sign = -1;
		count++;
	}
	else if (str[count] == '+')
		count++;
	while (str[count] >= '0' && str[count] <= '9')
	{
		result = (result * 10) + (str[count] - '0');
		count++;
	}
	result = result * sign;
	ft_min_max(result);
	return (result);
}

/*

int main(void)
{
	char num[30] = "\t\n\r\v\f  469 \n";
	int rest = ft_atoi(num);
	ft_printf("%d\n", rest);
	return(0);
}
*/
