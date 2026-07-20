/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 10:16:42 by mostoloz          #+#    #+#             */
/*   Updated: 2026/07/20 12:45:56 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_print_arg(char type, va_list args, int fd)
{
	int	count;

	count = 0;
	if (type == 'c')
		count = ft_put_char(va_arg(args, int), fd);
	else if (type == 's')
		count = ft_put_str(va_arg(args, char *), fd);
	else if (type == 'p')
		count = ft_put_ptr(va_arg(args, void *), fd);
	else if (type == 'd' || type == 'i')
		count = ft_put_int(va_arg(args, int), fd);
	else if (type == 'f')
		count = ft_put_double(va_arg(args, double), fd);
	else if (type == 'u')
		count = ft_put_uns((size_t) va_arg(args, unsigned int), fd);
	else if (type == 'x')
		count = ft_put_hex_low(va_arg(args, int), fd);
	else if (type == 'X')
		count = ft_put_hex_up(va_arg(args, int), fd);
	else if (type == '%')
		count = ft_put_char('%', fd);
	else
		return (-1);
	return (count);
}

static int	read_content(const char *content, int fd, va_list args)
{
	int	index;
	int	count;
	int	result;

	index = 0;
	count = 0;
	while (content[index])
	{
		if (content[index] != '%')
			result = ft_put_char(content[index], fd);
		else
		{
			result = ft_print_arg(content[index + 1], args, fd);
			index++;
		}
		if (result < 0)
			break ;
		count += result;
		index++;
	}
	return (count);
}

int	ft_printf(const char *content, int fd, ...)
{
	va_list	args;
	int		count;

	if (!content)
		return (-1);
	va_start(args, fd);
	count = read_content(content, fd, args);
	va_end(args);
	return (count);
}

/*
#include <stdio.h>
#include <limits.h>
int	main(void)
{
	char	*str="adios";
	ft_printf("c: %c\n", 'a');
	ft_printf("s: %s\n", "hola");
	ft_printf("p: %p\n", str);
	ft_printf("d: %d\n", 15);
	ft_printf("i: %d\n", 15);
	ft_printf("u: %u\n", -15);
	ft_printf("x: %x\n", 2342);
	ft_printf("X: %X\n", 2342);
	ft_printf("porcentaje: %%\n");
	return (0);
}
*/ 