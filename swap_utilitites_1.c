/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_utilitites_1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 17:15:53 by oadewumi          #+#    #+#             */
/*   Updated: 2024/04/18 14:08:08 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//check this for correctness. especiallyy the condition
void	swap_a(t_stack_mom *stack_a)
{
	swap(stack_a);
	write(1, "sa\n", 3);
}

void	swap(t_stack_mom *stack)
{
	int	temp;

	temp = 0;
	if (stack->top_side < 1)
		return ;
	temp = stack->array[stack->top_side];
	stack->array[stack->top_side] = stack->array[stack->top_side - 1];
	stack->array[stack->top_side - 1] = temp;
}
