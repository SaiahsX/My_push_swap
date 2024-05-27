/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_sort_operation.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:23:42 by oadewumi          #+#    #+#             */
/*   Updated: 2024/05/24 13:18:30 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//This function utilises conditions for choosing the appropriate sort method
// to use based on the size of the input.
void	sort_box(t_stack_mom *a, t_stack_mom *b)
{
	if (sorted(a) == false)
	{
		if (a->top == 1)
			sort_two_sort_a(a);
		else if (a->top == 2)
			sort_three_sort_a(a);
		else if (a->top < 7)
			sort_small_a(a, b);
		else
			radix(a, b);
	}
}

//This function sorts stack_a, first it checks if sorted then sorts for 2
void	sort_two_sort_a(t_stack_mom *stack_a)
{
	if (stack_a->top == 1 && sorted(stack_a) == false)
	{
		swap_a(stack_a);
	}
}

//my very own sort 3 function that uses recurssion
void	sort_three_sort_a(t_stack_mom *a)
{
	if (a->top == 2 && sorted(a) == false)
	{
		if (a->arr[a->top] > a->arr[a->top - 1]
			&& a->arr[a->top] < a->arr[a->top - 2])
			swap_a(a);
		else if (a->arr[a->top] < a->arr[a->top - 1]
			&& a->arr[a->top] > a->arr[a->top - 2])
			rev_rot_a(a);
		else if (a->arr[a->top] > a->arr[a->top - 1]
			&& a->arr[a->top] > a->arr[a->top - 2])
			rot_a(a);
		else if (a->arr[a->top] < a->arr[a->top - 1]
			&& a->arr[a->top] < a->arr[a->top - 2])
			swap_a(a);
		if (sorted(a) == false)
			sort_three_sort_a(a);
	}
}

//This is a helper function to sort_smal_a
// This helper does the else part of its parent
// This is donne to ensure the max 25 lines of code is not crossed.
static void	small_sort_do_else(t_stack_mom *a)
{
	if (min(a) == a->arr[a->top - 1])
		swap_a(a);
	else if (find_position(a, min(a)) > (a->top / 2))
		rev_rot_a(a);
	else if (find_position(a, min(a)) <= (a->top / 2))
		rot_a(a);
}

//This function sorts 7
// This functionn is optimised  to ensure that after a rev_rot
// a push doesn't happen if the a stack is sorted, so it just
// pushes back to a, and a is sorted.
void	sort_small_a(t_stack_mom *a, t_stack_mom *b)
{
	if (a->top < 7 && sorted(a) == false)
	{
		while (a->top > 2)
		{
			if (min(a) == a->arr[a->top])
			{
				if (sorted(a) == true)
					break ;
				push_b(a, b);
			}
			else
				small_sort_do_else(a);
		}
		sort_three_sort_a(a);
		while (b->top > -1)
			push_a(a, b);
	}
}
