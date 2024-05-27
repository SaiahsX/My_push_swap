/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 19:52:40 by oadewumi          #+#    #+#             */
/*   Updated: 2024/05/27 15:44:07 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	replace_og(t_stack_mom *a)
{
	int	i;

	i = 0;
	while (i <= a->top)
	{
		a->arr[i] = a->indx_arr[i];
		i++;
	}
}

//This is helper function for the radix sort that does the following
//copying the stack_a into a third array (a 1D array),
//bubble sorted the third array,
//mapped the location of each element of stack_a to its position in
//the third array. Then the position is stored in a 4th array.
//Memory protction employed in syuch a way that if there are any failures
//the stack memories are freed and the program exited. else, the array
//is freed normally after its use.
static void	radix_indx_buff(t_stack_mom *a, t_stack_mom *b)
{
	long	*cup;

	cup = dummy_sort(a);
	if (cup == NULL)
	{
		ft_free_both_stacks(a, b);
		ft_error ();
	}
	index_arr(a, cup);
	free (cup);
}

// This is a helper for radix, it pushes back to stack_a is the targetted 
// bit in stack_b is true
void	radix_helper(t_stack_mom *a, t_stack_mom *b, int i)
{
	int	size;

	size = b->top + 1;
	while (size > 0 && (b) != NULL)
	{
		if (((b->arr[b->top] >> i) & 1) == 0 && sorted(a) == false)
			rot_b(b);
		else
			push_a(a, b);
		size--;
	}
}

//This function uses bitwise operation by comparing a targetted bit to 0
// if true, this is pushed to the stack_b else a rotation is performed
// this function used fewer instruction, pa, pb, ra and rb, It is my hope 
// to optimise this function to include more instructions like rra and rrb
// this would reduce the amount of moves. However, all efforts to this have
// caused the algorithm to fail to sort. More work is needed on this. 
// But now its good enough.
// Also, offset is utilised to cater to negative integers since radix doesnt 
// work well with negative integers. (perhaps i know too little to do it)
// the offset is applied before the sort and reverted after the sort.
void	radix(t_stack_mom *a, t_stack_mom *b)
{
	int		i;
	int		x;
	int		size;

	radix_indx_buff(a, b);
	replace_og(a);
	i = 0;
	while (i < a->top && sorted(a) == false)
	{
		x = -1;
		size = a->top;
		while (x++ < size && (a) != NULL && sorted(a) == false)
		{
			if (((a->arr[a->top] >> i) & 1) == 0)
				push_b(a, b);
			else
				rot_a(a);
		}
		i++;
		radix_helper(a, b, i);
	}
}
