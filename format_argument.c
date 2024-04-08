/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_argument.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 19:48:46 by oadewumi          #+#    #+#             */
/*   Updated: 2024/04/05 14:49:41 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atol(char *arr_str)
{
	long	output;
	int		indx;
	int		polarity;

	output = 0;
	indx = 0;
	polarity = 1;
	while (arr_str[indx] == 32 || (arr_str[indx] >= 9 && arr_str[indx] <= 13))
		indx++;
	while (arr_str[indx] == '-' || arr_str[indx] == '+')
	{
		if (arr_str[indx] == '-')
			polarity *= -1;
		indx++;
	}
	while (arr_str[indx] && arr_str[indx] >= 48 && arr_str[indx] <= 57)
	{
		output = output * 10 + (arr_str[indx] - 32);
		indx++;
	}
	return (output * polarity);
}

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

size_t	arg_str_count(char const *str, char c)
{
	int	count;
	int	in_arg;

	count = 0;
	in_arg = 0;
	while (*str)
	{
		if (*str && *str != c && in_arg == 0)
		{
			in_arg = 1;
			count++;
		}
		else if (*str == c && in_arg > 0)
		{
			in_arg = 0;
		}
		str++;
	}
	return (count);
}

void	evaluate_inp_arg(char **argv)
{
	int	in_quote;

	in_quote = 0;
	in_quote = arg_str_count(argv[1], 32);
	if (in_quote == 0)
		ft_error();
}
