/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_operation.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:16:06 by oadewumi          #+#    #+#             */
/*   Updated: 2024/05/20 20:02:17 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//This function declares both needed stacks, calculates the actual input_size
//This function also ensures a guard against memory leaks by freeing the 
//allocated memory from a previous ft_split function operation.
//This function exclusively sorts 2 ints, 3 ints and bigger respectively.
int	ft_sort_mom(int argc, char **input_args)
{
	t_stack_mom	stack_a;
	t_stack_mom	stack_b;
	int			input_size;

	input_size = 0;
	if (argc == 2)
	{
		while (input_args[input_size] != NULL)
			input_size++;
	}
	else
		input_size = argc - 1;
	ft_init_stack_mom(&stack_a, input_size);
	ft_init_stack_mom(&stack_b, input_size);
	fill_stack_a(input_size, input_args, &stack_a);
	if (argc == 2)
		ft_free_input_args(input_args);
	sort_box(&stack_a, &stack_b);
	ft_free_both_stacks(&stack_a, &stack_b);
	return (0);
}

//This function initialises the stacks by allocating memory to the stack
//Also by setting the stack top value to -1
//and setting the stack size to the argument input size
void	ft_init_stack_mom(t_stack_mom *stack_mom, int input_size)
{
	stack_mom->arr = (int *)ft_calloc(input_size + 1, sizeof(int));
	if (!stack_mom->arr)
		ft_error();
	stack_mom->top = -1;
	stack_mom->stack_size = input_size;
}

void	ft_free_stack_mom(t_stack_mom *stack_mom)
{
	free(stack_mom->arr);
	stack_mom->arr = NULL;
	stack_mom->top = 0;
	stack_mom->stack_size = 0;
}

void	ft_free_both_stacks(t_stack_mom *a, t_stack_mom *b)
{
	ft_free_stack_mom(a);
	ft_free_stack_mom(b);
}

//This function performs the popuation of stack_a;
//input size is first decreased because it value is used to index to 0;
//The push function call first increases the value of stack_a->top to 0;
//The insertion is done in reverse because the first int should be at stk top;
//also insertion begins at stack_a->top 0 and ends at the actual stk_size;
void	fill_stack_a(int inpt_size, char **inpt_arg, t_stack_mom *stack_mom)
{
	inpt_size = inpt_size - 1;
	while (inpt_size >= 0)
	{
		push(ft_atol(inpt_arg[inpt_size]), stack_mom);
		inpt_size--;
	}
}
