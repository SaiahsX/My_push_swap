/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 18:45:59 by oadewumi          #+#    #+#             */
/*   Updated: 2024/04/16 19:58:15 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

void	ft_free_input_args(char **input_args)
{
	int	i;

	i = 0;
	while (input_args[i] != NULL)
	{
		free (input_args[i]);
		i++;
	}
	free (input_args);
}

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

