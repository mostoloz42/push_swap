/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 11:19:49 by mostoloz          #+#    #+#             */
/*   Updated: 2026/07/14 12:51:08 by mostoloz         ###   ########.fr       */
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
float	calculate_disorder(int *stack);
int		validate_input(int	*input_list);
int		ft_flags(char *argv);
int		ft_is_number(char *str);
int		ft_manejo_flags(char *argv);
int		*ft_check(int argc, char **argv, int *cuenta_numeros);
long	ft_min_max(long result);
void	ft_lstadd_front_t(t_stack **lst, t_stack *new);
t_stack	*ft_lstlast_t(t_stack *lst);
int		ft_lstsize_t(t_stack *lst);
void	ft_lstadd_back_t(t_stack **lst, t_stack *new);
t_stack	*ft_lstnew_t(int content);
void	simple_sort(t_stack **stack_a, t_bench *bench);
void	indexacion(t_stack *stack_a);
int		ft_sqrt(t_stack *stack_a);
void	medium_sort(t_stack **stack_a, t_stack **stack_b, t_bench *bench);
void	find_positions(t_stack *stack_a, int *lims, int *pos);
int		indice_max_stack_b(t_stack *stack_b);

#endif