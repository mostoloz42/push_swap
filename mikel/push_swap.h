/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 11:19:49 by mostoloz          #+#    #+#             */
/*   Updated: 2026/06/24 12:16:27 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "./libft/libft.h"
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

t_list	**create_list(int	*int_list);
int		validate_input(int	*input_list);
void	rotate(t_list **stack);
void	swap(t_list **stack);

#endif