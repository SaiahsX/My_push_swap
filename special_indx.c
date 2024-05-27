/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   special_indx.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 12:29:39 by oadewumi          #+#    #+#             */
/*   Updated: 2024/05/27 15:57:06 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// test out mappinng method instead of offset
//Here, the way is to map positive indexes to the arr elements
//to do this, i will need 2 extra dummy stacks; sorted_dummy and
// indexed_stack.
//the sorted_dummy will be sorted bubble sort
// Then, the positon of min value at the top of sorted_dummy would
// be found in the main arr stack.
void	flip(long *a, long *b)
{
	long	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

static void	bubble_sort(long *dummy_arr, int n)
{
	int	i;
	int	j;

	i = 0;
	while (i < n - 1)
	{
		j = 0;
		while (j < n - i - 1)
		{
			if (dummy_arr[j] > dummy_arr[j + 1])
				flip(&dummy_arr[j], &dummy_arr[j + 1]);
			j++;
		}
		i++;
	}
}

long	*dummy_sort(t_stack_mom *a)
{
	long	*sorted_dummy;
	int		i;
	int		stk_top_i;

	stk_top_i = a->stack_size - 1;
	i = 0;
	sorted_dummy = ft_calloc(a->stack_size + 1, sizeof(long));
	if (sorted_dummy == NULL)
		return (NULL);
	while (i < a->stack_size)
	{
		sorted_dummy[i] = a->arr[stk_top_i];
		i++;
		stk_top_i--;
	}
	bubble_sort(sorted_dummy, a->stack_size);
	return (sorted_dummy);
}

static long	find_loc(long *arr, long value, t_stack_mom *a)
{
	long	i;

	i = 0;
	while (i <= a->top)
	{
		if (arr[i] == value)
			return (i);
		i++;
	}
	return (-1);
}

void	index_arr(t_stack_mom *a, long	*srtd_dmy)
{
	int		size;
	long	val;
	int		x;
	int		i;

	x = 0;
	size = a->top;
	while (size >= 0)
	{
		i = 0;
		val = a->arr[size];
		while (i < a->stack_size)
		{
			if (val == srtd_dmy[i])
			{
				a->indx_arr[size] = find_loc(srtd_dmy, a->arr[size], a);
				break ;
			}
			i++;
		}
		size--;
	}
}
