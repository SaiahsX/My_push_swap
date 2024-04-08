/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:31:13 by oadewumi          #+#    #+#             */
/*   Updated: 2024/04/05 18:48:31 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	char	**input_args;

	if (argc <= 1)
		return (0);
	if (argc == 2)
	{
		evaluate_inp_arg(argv);
		input_args = ft_split(argv[1], 32);
	}
	else
	{
		input_args = &argv[1];
	}
	sanitize_args(input_args);
}
