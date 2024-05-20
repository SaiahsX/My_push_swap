/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 19:52:40 by oadewumi          #+#    #+#             */
/*   Updated: 2024/05/20 20:01:46 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>


// static void	print_array(t_stack_mom *a)
// {
// 	int	i;
// 	int	x;

// 	x = 0;
// 	i = a->top;
// 	while (i > -1)
// 	{
// 		printf("%d\n", a->arr[i]);
// 		i--;
// 		x++;
// 	}
// 	if (sorted(a) == true)
// 		printf("yes, it is very well sorted\n");
// 	printf("x_count %d", x);
// 	printf("\n");
// }

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

void	radix(t_stack_mom *a, t_stack_mom *b)
{
	int	i;
	int	x;
	int	size;
	int	offset;

	offset = abslt(min(a)) + 1;
	apply_offset(a, offset);
	i = 0;
	while (i < a->top && (sorted(a) == false))
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
	revert_offset(a, offset);
	//print_array (a);
}

/* void    list_print_both(t_stack_mom *a, t_stack_mom *b)
{
    // t_list*    cur_a;
    // t_list*    cur_b;

    // cur_a = *a;
    // cur_b = *b;

    printf("---------\n");
    printf("A\tB\n");

	int i = 0;
    while (i <= a->stack_size && i <= b->stack_size) {

        if (a->arr[a->stack_size - i] != 0) 
		{
            printf("%d", a->arr[a->stack_size - i]);
        }
        else
            printf("-");

        printf("\t");

        if (b->arr[b->stack_size - i]) {
            printf("%d", b->arr[b->stack_size - i]);
        }
        else
            printf("-");

        printf("\n");
		i++;
    }
} */