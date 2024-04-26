/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_operation.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:16:06 by oadewumi          #+#    #+#             */
/*   Updated: 2024/04/26 15:14:16 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// #include <stdio.h>

// static void	print_all_str(int *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i])
// 	{
// 		printf("%d\n", str[i]);
// 		i++;
// 	}
// 	printf("\n");
// }



int	ft_sort(int argc, char **input_args)
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
	push_stack_mom(input_size, input_args, &stack_a);
	if (argc == 2)
		ft_free_input_args(input_args);
	sort_two_sort_a(&stack_a, input_size);
	sort_three_sort_a(&stack_a, input_size);
	return (0);
}

void	ft_init_stack_mom(t_stack_mom *stack_mom, int stack_size)
{
	stack_mom->array = (int *)ft_calloc(stack_size + 1, sizeof(int));
	if (!stack_mom->array)
		ft_error();
	stack_mom->top = 0;
	stack_mom->stack_size = stack_size;
}

void	ft_free_stack_mom(t_stack_mom *stack_mom)
{
	free(stack_mom->array);
	stack_mom->array = NULL;
	stack_mom->top = 0;
	stack_mom->stack_size = 0;
}

void	push_stack_mom(int inpt_size, char **inpt_arg, t_stack_mom *stack_mom)
{
	inpt_size = inpt_size - 1;
	while (inpt_size >= 0)
	{
		stack_mom->array[stack_mom->top] = ft_atol(inpt_arg[inpt_size]);
		// printf("This is what we are feeding ft_atol. %s\n", inpt_arg[inpt_size]);
		// printf("We are currently inside the while loop that exists within push_stack_mom.\n");
		// printf("this is the array inside stack_mom. top_side = %d and array[top_side] = %i\n", stack_mom->top, stack_mom->array[stack_mom->top]);
		stack_mom->top++;
		inpt_size--;
	}
	stack_mom->top--;
	//print_all_str(stack_mom->array);
}
