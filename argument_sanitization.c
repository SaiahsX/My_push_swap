/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument_sanitization.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 12:00:37 by oadewumi          #+#    #+#             */
/*   Updated: 2024/05/20 19:57:40 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	sanitize_args(char **arg_arr)
{
	int	i;

	i = 0;
	ft_dupli_check(arg_arr);
	while (arg_arr[i] != NULL)
	{
		ft_numeric_check(arg_arr[i]);
		ft_overflow_check(arg_arr[i]);
		i++;
	}
	return (0);
}

int	ft_dupli_check(char **arg_arr)
{
	int	i;
	int	j;

	i = 0;
	while (arg_arr[i] != NULL)
	{
		j = i + 1;
		while (arg_arr[j] != NULL)
		{
			if (ft_atol(arg_arr[i]) == ft_atol(arg_arr[j]))
				ft_error();
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_numeric_check(const char *arr_str)
{
	int	i;

	i = 0;
	if (arr_str[i] == '\0')
		ft_error();
	if (ft_strchr("+-", arr_str[i]) != NULL)
		i++;
	while (arr_str[i] != '\0')
	{
		if (arr_str[i] < '0' || arr_str[i] > '9')
			ft_error();
		i++;
	}
	return (0);
}

int	ft_overflow_check(char *arr_str)
{
	long long	num;

	num = ft_atol(arr_str);
	if (num < INT_MIN || num > INT_MAX)
		ft_error();
	return (0);
}

