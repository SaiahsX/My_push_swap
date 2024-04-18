/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_utilities.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:42:30 by oadewumi          #+#    #+#             */
/*   Updated: 2024/04/18 13:55:28 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(int position_value, t_stack_mom *stack)
{
	stack->array[stack->top_side] = position_value;
	stack->top_side++;
}

int	pop(t_stack_mom *stack)
{
	return (stack->array[stack->top_side--]);
}

//function to push to stack_b and writes out "pb\n"
void	push_b(t_stack_mom *stack_a, t_stack_mom *stack_b)
{
	if (stack_b->top_side >= 0)
		push(pop(stack_a), stack_b);
	write(1, "pb\n", 3);
}
