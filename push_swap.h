/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 11:19:49 by mostoloz          #+#    #+#             */
/*   Updated: 2026/07/17 13:14:52 by francysa         ###   ########.fr       */
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
	char	*strategy;
	int		pa;
	int		pb;
	int		sa;
	int		sb;
	int		ss;
	int		ra;
	int		rb;
	int		rr;
	int		rra;
	int		rrb;
	int		rrr;
	int		show;
	int		total;
	int		disorder;
	int		sort_type;
}	t_bench;

typedef struct t_stack
{
	int				content;
	int				index;
	struct t_stack	*next;
	struct t_stack	*prev;
}					t_stack;

t_stack	**create_list(int	*int_list, int size);
void	pa(t_stack **stack_a, t_stack **stack_b, t_bench *bench);
void	pb(t_stack **stack_a, t_stack **stack_b, t_bench *bench);
void	sa(t_stack **stack_a, t_bench *bench);
void	sb(t_stack **stack_b, t_bench *bench);
void	ss(t_stack **stack_a, t_stack **stack_b, t_bench *bench);
void	ra(t_stack **stack_a, t_bench *bench);
void	rb(t_stack **stack_b, t_bench *bench);
void	rr(t_stack **stack_a, t_stack **stack_b, t_bench *bench);
void	rra(t_stack **stack_a, t_bench *bench);
void	rrb(t_stack **stack_b, t_bench *bench);
void	rrr(t_stack **stack_a, t_stack **stack_b, t_bench *bench);
void	ft_free_split(char **aux);
void	sort_three(t_stack **stack_a, t_bench *bench);
void	sort_five(t_stack **stack_a, t_bench *bench, int size);
long	ft_atol(const char *str);
long	ft_min_max(long result);
float	calculate_disorder(t_stack *stack, t_bench *bench);
int		validate_input(int	*input_list, int size);
int		ft_flags(char *argv, t_bench *bench);
int		*ft_check(int argc, char **argv, int *cuenta_numeros, t_bench *bench);
void	ft_lstadd_front_t(t_stack **lst, t_stack *new);
t_stack	*ft_lstlast_t(t_stack *lst);
int		ft_lstsize_t(t_stack *lst);
void	ft_lstadd_back_t(t_stack **lst, t_stack *new);
t_stack	*ft_lstnew_t(int content);
void	simple_sort(t_stack **stack_a, t_bench *bench);
void	ft_index(t_stack *stack_a);
int		ft_sqrt(t_stack *stack_a);
void	medium_sort(t_stack **stack_a, t_stack **stack_b, t_bench *bench);
void	find_positions(t_stack *stack_a, int *lims, int *pos);
void	adaptive_sort(t_stack **stack_a, t_stack **stack_b,
			t_bench *bench, float disorder);
void	no_disorder(t_bench *bench);
void	print_bench(t_bench *bench);
void	save_adaptive_strategy(t_bench *bench, int size);
void	complex_sort(t_stack **stack_a, t_stack **stack_b, t_bench *bench);
void	ft_free_stack(t_stack	**stack_a);

#endif