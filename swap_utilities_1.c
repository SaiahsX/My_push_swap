/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_utilities_1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 17:15:53 by oadewumi          #+#    #+#             */
/*   Updated: 2024/04/26 20:29:42 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack_mom *stack)
{
	int	temp;

	temp = 0;
	if (stack->top < 1)
		return ;
	temp = stack->array[stack->top];
	stack->array[stack->top] = stack->array[stack->top - 1];
	stack->array[stack->top - 1] = temp;
}

//check this for correctness. especiallyy the condition
void	swap_a(t_stack_mom *stack_a)
{
	swap(stack_a);
	write(1, "sa\n", 3);
}

