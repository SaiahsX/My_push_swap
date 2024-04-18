/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 19:00:01 by oadewumi          #+#    #+#             */
/*   Updated: 2024/04/18 13:51:30 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <limits.h>
# include <stdbool.h>
# include "MY_LIBFT/libft.h"

typedef struct s_stack
{
	int	stack_size;
	int	top_side;
	int	*array;	
}	t_stack_mom;

// Input Argument Processing
void	ft_error(void);
void	evaluate_inp_arg(char **argv);
int		ft_overflow_check(char *arr_str);
int		sanitize_args(char **argv);
int		ft_dupli_check(char **arg_arr);
int		ft_numeric_check(const char *arr_str);
long	ft_atol(char *arr_str);
size_t	arg_str_count(char const *str, char c);


int		ft_sort(int argc, char **input_args);
void	ft_free_input_args(char **input_args);
void	ft_init_stack_mom(t_stack_mom *stack_mom, int stack_size);
void	push_stack_mom(int inpt_size, char **inpt_arg, t_stack_mom *stack_mom);

int		pop(t_stack_mom *stack);
void	swap(t_stack_mom *stack);
bool	sorted(t_stack_mom *stack);
void	swap_a(t_stack_mom *stack_a);
void	push(int position_value, t_stack_mom *stack);
void	first_sort_stack_a(t_stack_mom *stack_a, t_stack_mom *stack_b);

void	push_b(t_stack_mom *stack_a, t_stack_mom *stack_b);

#endif