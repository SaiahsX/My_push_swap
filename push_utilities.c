/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_utilities.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:42:30 by oadewumi          #+#    #+#             */
/*   Updated: 2024/05/20 20:05:42 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// This function checks for stack overflow 
// before pushing a new value onto the stack.
// The error messsages can be modified to display more gracefully
void	push(int position_value, t_stack_mom *stack)
{
	if (stack->top < stack->stack_size -1)
	{
		stack->top++;
		stack->arr[stack->top] = position_value;
	}
	else
		ft_error ();
}

//This function checks for stack underflow 
// before popping a value from the stack
// The error messsages can be modified to display more gracefully
int	pop(t_stack_mom *stack)
{
	if (stack->top > -1)
		return (stack->arr[stack->top--]);
	ft_error ();
	return (-1);
}

//function to push to stack_b and writes out "pb\n"
void	push_b(t_stack_mom *stack_a, t_stack_mom *stack_b)
{
	if (stack_a->top > 0)
		push(pop(stack_a), stack_b);
	write(1, "pb\n", 3);
}

//function to push to stack_a and writes out "pa\n"
void	push_a(t_stack_mom *stack_a, t_stack_mom *stack_b)
{
	if (stack_b->top > -1)
		push(pop(stack_b), stack_a);
	write(1, "pa\n", 3);
}
