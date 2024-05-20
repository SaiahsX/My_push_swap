/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 19:00:01 by oadewumi          #+#    #+#             */
/*   Updated: 2024/05/20 20:06:54 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <limits.h>
# include <stdbool.h>
# include "MY_LIBFT/libft.h"
# include <stdio.h>

typedef struct s_stack
{
	int	stack_size;
	int	top;
	int	*arr;	
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
int		ft_sort_mom(int argc, char **input_args);
int		find_position(t_stack_mom *stack, int value);
int		min(t_stack_mom *stack);
int		max(t_stack_mom *stack);

// stack initialisation
void	ft_free_input_args(char **input_args);
void	ft_free_stack_mom(t_stack_mom *stack_mom);
void	ft_free_both_stacks(t_stack_mom *a, t_stack_mom *b);
void	ft_init_stack_mom(t_stack_mom *stack_mom, int input_size);
void	fill_stack_a(int inpt_size, char **inpt_arg, t_stack_mom *stack_mom);

// sorting
void	sort_two_sort_a(t_stack_mom *stack_a);
void	sort_three_sort_a(t_stack_mom *a);
void	sort_small_a(t_stack_mom *a, t_stack_mom *b);
void	sort_box(t_stack_mom *a, t_stack_mom *b);
void	radix(t_stack_mom *a, t_stack_mom *b);
void	radix_helper(t_stack_mom *a, t_stack_mom *b, int i);

//swapping
void	swap(t_stack_mom *stack);
void	swap_a(t_stack_mom *stack_a);
void	swap_b(t_stack_mom *stack_b);
void	swap_ab(t_stack_mom *a, t_stack_mom *b);

//rotating
void	rotate(t_stack_mom *stack);
void	rot_a(t_stack_mom *stack_a);
void	rot_b(t_stack_mom *stack_b);
void	rot_ab(t_stack_mom *a, t_stack_mom *b);
void	reverse_rotate(t_stack_mom *stack);
void	rev_rot_a(t_stack_mom *stack_a);
void	rev_rot_b(t_stack_mom *stack_b);
void	rev_rot_ab(t_stack_mom *a, t_stack_mom *b);

//pushing
void	push(int position_value, t_stack_mom *stack);
void	push_b(t_stack_mom *stack_a, t_stack_mom *stack_b);
void	push_a(t_stack_mom *stack_a, t_stack_mom *stack_b);

// popping
int		pop(t_stack_mom *stack);

//utilities
int		abslt(int num);
void	apply_offset(t_stack_mom *a, int offset);
void	revert_offset(t_stack_mom *a, int offset);

#endif