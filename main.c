/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 17:11:10 by francysa          #+#    #+#             */
/*   Updated: 2026/07/06 18:07:35 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	if(argc < 2)
		return (0);
	if (ft_check(argc, argv) == 1)
	ft_printf("RESULTADO: ¡Argumentos válidos! Puedes crear el Stack A.\n");
	else
		ft_printf("Error\n");
	return (0);		
}

/* int main(void)
{
	t_list **stack_a;
	t_bench *bench;

	stack_a = malloc(sizeof(t_list *));
	bench = malloc(sizeof(t_bench));
	ft_lstadd_back(stack_a, ft_lstnew(5));
	ft_lstadd_back(stack_a, ft_lstnew(2));
	ft_lstadd_back(stack_a, ft_lstnew(8));
	ft_lstadd_back(stack_a, ft_lstnew(1));
	ft_lstadd_back(stack_a, ft_lstnew(6));
	select_sort(stack_a, bench);
	while((*stack_a))
	{
		ft_printf("%d\n", (*stack_a)->content);
		(*stack_a) = (*stack_a)->next;
	}
} */

/*int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	if (ft_check(argc, argv) == 1)
		ft_printf("RESULTADO: ¡Argumentos válidos! Puedes crear el Stack A.\n");
	else
		ft_printf("Error\n");
	return (0);
}*/
