/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument_sanitization.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 12:00:37 by oadewumi          #+#    #+#             */
/*   Updated: 2024/04/08 16:03:29 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_dupli_check(char **arg_arr);
// int	sanitize_args(char **arg_arr, int arg_indx)
// {
// 	ft_dupli_check(arg_arr);
// 	while (arg_arr[arg_indx])
// 	{
// 		ft_numeric_check(arg_arr[arg_indx]);
// 		ft_overflow_check(arg_arr[arg_indx]);
// 		arg_indx++;
// 	}
// 	return (0);
// }

int	sanitize_args(char **arg_arr)
{
	int	i;

	i = 0;
	ft_dupli_check(arg_arr);
	// while (arg_arr)
	// {
	// 	ft_numeric_check(arg_arr[i]);
	// 	ft_overflow_check(arg_arr[i]);
	// 	i++;
	// }
	return (0);
}

// int	ft_numeric_check(const char *arr_str)
// {
// 	int	indx;

// 	indx = 0;
// 	if (arr_str[indx] == '\0')
// 		ft_error();
// 	if (ft_strchr("+-", arr_str[indx]) != NULL)
// 		indx++;
// 	while (arr_str[indx] != '\0')
// 	{
// 		if (arr_str[indx] < 48 || arr_str[indx] > 57)
// 			ft_error();
// 		indx++;
// 	}
// 	return (0);
// }

// int	ft_overflow_check(char *arr_str)
// {
// 	long long	num;

// 	num = ft_atol(arr_str);
// 	if (num < INT_MIN || num > INT_MAX)
// 		ft_error();
// 	return (0);
// }


void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

int	ft_dupli_check(char **arg_arr)
{
	int	i;
	int	j;
	int	cmp;

	i = 0;
	while (arg_arr[i] != NULL)
	{
		j = i + 1;
		while (arg_arr[j] != NULL)
		{
			printf("%s, %s\n", arg_arr[i], arg_arr[j]);
			cmp = ft_strncmp(arg_arr[i], arg_arr[j], ft_strlen(arg_arr[j]) + 1);
			if (cmp == 0)
				ft_error();
			j++;
		}
		i++;
	}
	return (0);
}

#include <stdio.h>

int	main(int argc, char **argv)
{
	// (void)argc;
	// (void)argv;
	// char	*array;
	// char	**split_arr;

	// array = "a b c b e";
	// split_arr = ft_split(array, ' ');

	if (argc > 1)
	{
		if (ft_dupli_check(&argv[1]) != '\0')
			printf("Wow we found it!\n");
		else
			printf("The given character is not in the str\n");
	}
	return (0);
}