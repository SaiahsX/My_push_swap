/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 18:45:59 by oadewumi          #+#    #+#             */
/*   Updated: 2024/05/24 17:03:02 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//This function explicitely prints/ writes out an error message when called
void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

// This function is also a part of memory management that deallocates memory
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
