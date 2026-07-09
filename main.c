/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 17:11:10 by francysa          #+#    #+#             */
/*   Updated: 2026/07/09 09:06:45 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	*los_numeros;
	int	cuenta_numeros;
	t_stack	**stack_a;
	t_bench *bench;

	if(argc < 2)
		return (0);
	bench = malloc(sizeof(t_bench));
	if(!bench)
		return (1);
	ft_bzero(bench, sizeof(t_bench));
	los_numeros = ft_check(argc, argv, &cuenta_numeros);
	if (!los_numeros)
	{
		printf("Error\n");
		return (1);
	}
	stack_a = create_list(los_numeros, cuenta_numeros);
	free(los_numeros);
	if (!stack_a)
		return (1);
	chuncks(stack_a, bench);
	/* while((*stack_a))
	{
		printf("%d\n", (*stack_a)->content);
		(*stack_a) = (*stack_a)->next;
	} */
	return (0);		
}
