/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_utilities.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 19:07:12 by oadewumi          #+#    #+#             */
/*   Updated: 2024/05/20 20:04:41 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//this function performs Reverse Rotation by taking the bottom value to the top
void	reverse_rotate(t_stack_mom *stack)
{
	int	i;
	int	temp;

	i = 0;
	temp = stack->arr[0];
	while (i < stack->top)
	{
		stack->arr[i] = stack->arr[i + 1];
		i++;
	}
	stack->arr[stack->top] = temp;
}

//this function performs normal Rotation by taking the top value to the bottom
void	rotate(t_stack_mom *stack)
{
	int	i;
	int	temp;

	i = stack->top;
	temp = stack->arr[stack->top];
	while (i > 0)
	{
		stack->arr[i] = stack->arr[i - 1];
		i--;
	}
	stack->arr[0] = temp;
}
