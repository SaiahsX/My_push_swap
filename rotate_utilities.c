/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_utilities.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 19:07:12 by oadewumi          #+#    #+#             */
/*   Updated: 2024/04/25 18:07:57 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//this function performs Reverse Rotation by taking the bottom value to the top
void	reverse_rotate(t_stack_mom *stack)
{
	int	i;
	int	temp;

	i = 0;
	temp = stack->array[0];
	while (i < stack->top)
	{
		stack->array[i] = stack->array[i + 1];
		i++;
	}
	stack->array[stack->top] = temp;
}

//this function performs normal Rotation by taking the top value to the bottom
void	rotate(t_stack_mom *stack)
{
	int	i;
	int	temp;

	i = stack->top;
	temp = stack->array[stack->top];
	while (i > 0)
	{
		stack->array[i] = stack->array[i - 1];
		i--;
	}
	stack->array[0] = temp;
}

void	rev_rot_a(t_stack_mom *stack_a)
{
	reverse_rotate(stack_a);
	write(1, "rra\n", 4);
}

void	rot_a(t_stack_mom *stack_a)
{
	rotate(stack_a);
	write(1, "ra\n", 3);
}
