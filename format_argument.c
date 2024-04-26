/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_argument.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 19:48:46 by oadewumi          #+#    #+#             */
/*   Updated: 2024/04/20 13:04:57 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	evaluate_inp_arg(char **argv)
{
	int	in_quote;

	in_quote = 0;
	in_quote = arg_str_count(argv[1], ' ');
	if (in_quote == 0)
		ft_error();
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

long	ft_atol(char *arr_str)
{
	long	output;
	int		i;
	int		polarity;

	output = 0;
	i = 0;
	polarity = 1;
	while (arr_str[i] == ' ' || (arr_str[i] >= 9 && arr_str[i] <= 13))
		i++;
	while (arr_str[i] == '-' || arr_str[i] == '+')
	{
		if (arr_str[i] == '-')
			polarity *= -1;
		i++;
	}
	while (arr_str[i] && arr_str[i] >= '0' && arr_str[i] <= '9')
	{
		output = output * 10 + (arr_str[i] - '0');
		i++;
	}
	return (output * polarity);
}
