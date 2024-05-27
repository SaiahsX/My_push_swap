/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:31:13 by oadewumi          #+#    #+#             */
/*   Updated: 2024/05/24 16:53:04 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	char	**input_args;

	if (argc < 2)
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
	ft_sort_mom(argc, input_args);
	return (0);
}
