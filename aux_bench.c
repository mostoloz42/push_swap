/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_bench.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostoloz <mostoloz@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 12:35:57 by mostoloz          #+#    #+#             */
/*   Updated: 2026/07/20 12:40:09 by mostoloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	no_disorder(t_bench *bench)
{
	if (bench->sort_type == 1)
		bench->strategy = "Simple / O(n²)";
	else if (bench->sort_type == 2)
		bench->strategy = "Medium / O(n√n)";
	else if (bench->sort_type == 3)
		bench->strategy = "Complex / O(n log n)";
	else
		bench->strategy = "Adaptive / Numbers already are in the correct order";
}

void	save_adaptive_strategy(t_bench *bench, int size)
{
	if (size == 2)
		bench->strategy = "Adaptive / Sort Two";
	else if (size == 3)
		bench->strategy = "Adaptive / Sort Three";
	else if (size == 4 || size == 5)
		bench->strategy = "Adaptive / Sort Five";
	else if (bench->disorder < 20)
		bench->strategy = "Adaptive / Simple / O(n²)";
	else if (bench->disorder < 50)
		bench->strategy = "Adaptive / Medium / O(n√n)";
	else
		bench->strategy = "Adaptive / Complex / O(n log n)";
}

void	print_bench(t_bench *bench)
{
	ft_printf("[bench] disorder: %f%%\n", 2, bench->disorder);
	ft_printf("[bench] strategy: %s\n", 2, bench->strategy);
	ft_printf("[bench] total ops: %d\n", 2, bench->total);
	ft_printf("[bench] sa: %d sb: %d ss: %d pa: %d pb: %d \n",
		2, bench->sa, bench->sb, bench->ss, bench->pa, bench->pb);
	ft_printf("[bench] ra: %d rb: %d rr: %d rra: %d rrb: %d rrr: %d \n",
		2, bench->ra, bench->rb, bench->rr, bench->rra, bench->rrb, bench->rrb);
}
