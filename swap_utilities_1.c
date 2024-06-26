/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_utilities_1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 17:15:53 by oadewumi          #+#    #+#             */
/*   Updated: 2024/05/24 17:05:33 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack_mom *stack)
{
	int	temp;

	temp = 0;
	if (stack->top < 1)
		return ;
	temp = stack->arr[stack->top];
	stack->arr[stack->top] = stack->arr[stack->top - 1];
	stack->arr[stack->top - 1] = temp;
}

//check this for correctness. especiallyy the condition
void	swap_a(t_stack_mom *stack_a)
{
	swap(stack_a);
	write(1, "sa\n", 3);
}
