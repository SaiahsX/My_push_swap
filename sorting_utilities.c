/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_utilities.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:45:18 by oadewumi          #+#    #+#             */
/*   Updated: 2024/05/18 18:59:16 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

int	max(t_stack_mom *stack)
{
	int	i;
	int	max_val;

	i = 0;
	max_val = stack->arr[stack->top];
	while (i <= stack->top)
	{
		if (stack->arr[i] > max_val)
			max_val = stack->arr[i];
		i++;
	}
	return (max_val);
}

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
