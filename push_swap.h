/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 19:00:01 by oadewumi          #+#    #+#             */
/*   Updated: 2024/04/25 18:07:57 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <limits.h>
# include <stdbool.h>
# include "MY_LIBFT/libft.h"

typedef struct s_stack
{
	int	stack_size;
	int	top;
	int	*array;	
}	t_stack_mom;

// Input Argument Processing
void	evaluate_inp_arg(char **argv);
int		sanitize_args(char **argv);
int		ft_dupli_check(char **arg_arr);
int		ft_overflow_check(char *arr_str);
int		ft_numeric_check(const char *arr_str);
long	ft_atol(char *arr_str);
size_t	arg_str_count(char const *str, char c);

//inpt argument error handler
void	ft_error(void);

// sort processing
bool	sorted(t_stack_mom *stack);
int		ft_sort(int argc, char **input_args);
int		find_position(t_stack_mom *stack, int min_max_val);
int		minimum_value(t_stack_mom *stack);
int		maximum_value(t_stack_mom *stack);

// stack initialisation
void	ft_free_input_args(char **input_args);
void	ft_init_stack_mom(t_stack_mom *stack_mom, int stack_size);
void	push_stack_mom(int inpt_size, char **inpt_arg, t_stack_mom *stack_mom);

// sorting
void	sort_two_sort_a(t_stack_mom *stack_a, int argc);
void	sort_three_sort_a(t_stack_mom *a, int argc);

//swapping
void	swap(t_stack_mom *stack);
void	swap_a(t_stack_mom *stack_a);

//rotating
void	rotate(t_stack_mom *stack);
void	rot_a(t_stack_mom *stack_a);
void	rev_rot_a(t_stack_mom *stack_a);
void	reverse_rotate(t_stack_mom *stack);

//pushing
void	push(int position_value, t_stack_mom *stack);
void	push_b(t_stack_mom *stack_a, t_stack_mom *stack_b);

// popping
int		pop(t_stack_mom *stack);

#endif