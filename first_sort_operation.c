/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_sort_operation.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:23:42 by oadewumi          #+#    #+#             */
/*   Updated: 2024/04/16 19:59:35 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//This function sorts stack_a, first it checks and sorts for 2, then more
void	first_sort_stack_a(t_stack_mom *stack_a, t_stack_mom *stack_b)
{
	if (stack_a -> top_side == 1 && sorted(stack_a) == false)
		swap_a(stack_a);
	else
	{
		if (stack_a->top_side > 2 && sorted(stack_a) == false)
			push_b()
	}
}
