#include "push_swap.h"

int	ft_atoi(const char *str)
{
	int	count;
	int	result;
	int	sign;

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
	return (result * sign);
}

/*
#include <stdio.h>

int main(void)
{
	char num[30] = "\t\n\r\v\f  469 \n";
	int rest = ft_atoi(num);
	printf("%d\n", rest);
	return(0);
}
*/