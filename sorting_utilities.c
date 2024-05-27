/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_utilities.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:45:18 by oadewumi          #+#    #+#             */
/*   Updated: 2024/05/24 17:00:54 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//This function returns a boolean, true/false if a stack is sorted or not
bool	sorted(t_stack_mom *stack)
{
	int	i;

	i = 0;
	while (i < stack->top)
	{
		if (stack->arr[i] < stack->arr[i + 1])
			return (false);
		i++;
	}
	return (true);
}

//This function is responsible for locating the min value in a stack
int	min(t_stack_mom *stack)
{
	int	i;
	int	min_val;

	i = 0;
	min_val = stack->arr[stack->top];
	while (i <= stack->top)
	{
		if (stack->arr[i] < min_val)
			min_val = stack->arr[i];
		i++;
	}
	return (min_val);
}

//function to find the position of the max, min or any value in the stack
int	find_position(t_stack_mom *stack, int value)
{
	int	pos;
	int	index;

	pos = 0;
	index = stack->top;
	while (stack->arr[index] != value)
	{
		index--;
		pos++;
	}
	return (pos);
}
