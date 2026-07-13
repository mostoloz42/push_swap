/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 11:19:49 by mostoloz          #+#    #+#             */
/*   Updated: 2026/07/13 11:25:43 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "./libft/libft.h"
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

typedef struct s_bench
{
	int	pa;
	int	pb;
	int	sa;
	int	sb;
	int	ss;
	int	ra;
	int	rb;
	int	rr;
	int	rra;
	int	rrb;
	int	rrr;
	int	total;
}	t_bench;

t_list	**create_list(int	*int_list);
void	pa(t_list **stack_a, t_list **stack_b, t_bench *bench);
void	pb(t_list **stack_a, t_list **stack_b, t_bench *bench);
void	sa(t_list **stack_a, t_bench *bench);
void	sb(t_list **stack_b, t_bench *bench);
void	ss(t_list **stack_a, t_list **stack_b, t_bench *bench);
void	ra(t_list **stack_a, t_bench *bench);
void	rb(t_list **stack_b, t_bench *bench);
void	rr(t_list **stack_a, t_list **stack_b, t_bench *bench);
void	rra(t_list **stack_a, t_bench *bench);
void	rrb(t_list **stack_b, t_bench *bench);
void	rrr(t_list **stack_a, t_list **stack_b, t_bench *bench);
void	ft_free_split(char **aux);
void	order_three(t_list **stack_a, t_bench *bench);
long	ft_atol(const char *str);
long	ft_min_max(long result);
float	calculate_disorder(int *stack);
int		validate_input(int	*input_list);
int		ft_flags(char *argv);

#endif