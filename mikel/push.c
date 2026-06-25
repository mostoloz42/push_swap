/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 12:45:11 by mostoloz          #+#    #+#             */
/*   Updated: 2026/06/25 12:45:32 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_list **src, t_list **dst)
{
	t_list	*nodo_one;

	if (!src || !*dst)
		return ;
	nodo_one = *dst;
	*dst = (*dst)->next;
	nodo_one->next = *src;
	*src = nodo_one;
}