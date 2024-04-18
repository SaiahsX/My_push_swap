/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_utilities.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:45:18 by oadewumi          #+#    #+#             */
/*   Updated: 2024/04/18 20:43:10 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	sorted(t_stack_mom *stack)
{
	int	i;

	i = 0;
	while (i < stack->top_side)
	{
		if (stack->array[i] < stack->array[i + 1])
			return (false);
		i++;
	}
	return (true);
}

int	maximum_value(t_stack_mom *stack)
{
	int	i;
	int	max_value;

	i = 0;
	max_value = stack->array[stack->top_side];
	while (i <= stack->top_side)
	{
		if (stack->array[i] > max_value)
			max_value = stack->array[i];
		i++;
	}
	return (max_value);
}

int	minimum_value(t_stack_mom *stack)
{
	int	i;
	int	min_value;

	i = 0;
	min_value = stack->array[stack->top_side];
	while (i <= stack->top_side)
	{
		if (stack->array[i] < min_value)
			min_value = stack->array[i];
		i++;
	}
	return (min_value);
}

int	find_position(t_stack_mom *stack, int num)
{
	
}