/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 11:00:33 by francysa          #+#    #+#             */
/*   Updated: 2026/06/25 16:23:36 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h> 

typedef struct s_list
{
	int			*content;
	struct s_list	*next;
}					t_list;
void	push(t_list **src, t_list **dst);
void	reverse_a(t_list **stack_a);
void	reverse_b(t_list **stack_b);
void	reverse(t_list **stack_a, t_list **stack_b);
int		ft_is_number(char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_manejo_flags(char *argv);
int		ft_flags(int argc, char **argv);
int		ft_check(int argc, char **argv);
void	ft_free_split(char **aux);
char	**ft_split(char const *s, char c);
int		ft_atoi(const char *str); 

#endif
