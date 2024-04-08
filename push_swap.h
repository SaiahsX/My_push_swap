/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 19:00:01 by oadewumi          #+#    #+#             */
/*   Updated: 2024/04/05 20:42:02 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <limits.h>
# include "MY_LIBFT/libft.h"

typedef struct s_stack
{
	int	stack_size;
	int	top_side;
	int	*array;	
}	t_stack_mom;

void	ft_error(void);
void	evaluate_inp_arg(char **argv);
int		ft_overflow_check(char *arr_str);
int		ft_numeric_check(const char *arr_str);
int		sanitize_args(char **argv);

size_t	arg_str_count(char const *str, char c);
long	ft_atol(char *arr_str);

#endif