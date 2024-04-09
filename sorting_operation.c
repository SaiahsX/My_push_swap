/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_operation.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:16:06 by oadewumi          #+#    #+#             */
/*   Updated: 2024/04/09 16:48:37 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sort(int argc, char **input_args)
{
	t_stack_mom	stack_a;
	t_stack_mom	stack_b;
	int			input_size;

	input_size = 0;
	if (argc == 2)
	{
		input_size = ft_strlen(input_args[0]);
	}
	else
		input_size = argc - 1;
	ft_init_stack_mom(&stack_a, input_size);
	ft_init_stack_mom(&stack_b, input_size);
	ft_fill_stack_mom(input_size, input_args, &stack_a);
	return (0);
}

void	ft_init_stack_mom(t_stack_mom *stack_mom, int stack_size)
{
	stack_mom->array = (int *)ft_calloc(stack_size, sizeof(int));
	if (!stack_mom->array)
		ft_error();
	stack_mom->top_side = 0;
	stack_mom->stack_size = stack_size;
}

void	ft_free_stack_mom(t_stack_mom *stack_mom)
{
	free(stack_mom->array);
	stack_mom->array = NULL;
	stack_mom->top_side = 0;
	stack_mom->stack_size = 0;
}

void	ft_fill_stack_mom(int input_size, char **input_arg, t_stack_mom *stack_mom)
{
	int	i;

	i = 0;
	while (input_arg[i] != NULL)
	{
		stack_mom->array[i] = ft_atol(input_arg[i]);
		i++;
	}
}

//void	ft_push_two_b(t_stack_mom *stack_a, t_stack_mom *stack_b, )