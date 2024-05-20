/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 18:45:59 by oadewumi          #+#    #+#             */
/*   Updated: 2024/05/20 20:04:05 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

//Helper function to help convert -ves to absolute value
int	abslt(int num)
{
	if (num < 0)
		return (-num);
	else
		return (num);
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

void	apply_offset(t_stack_mom *a, int offset)
{
	int	i;

	i = 0;
	while (i <= a->top)
	{
		a->arr[i] += offset;
		i++;
	}
}

void	revert_offset(t_stack_mom *a, int offset)
{
	int	i;

	i = 0;
	while (i <= a->top)
	{
		a->arr[i] -= offset;
		i++;
	}
}
