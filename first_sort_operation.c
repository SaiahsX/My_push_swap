/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_sort_operation.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:23:42 by oadewumi          #+#    #+#             */
/*   Updated: 2024/04/26 20:13:35 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//This function sorts stack_a, first it checks and sorts for 2, then more
void	sort_two_sort_a(t_stack_mom *stack_a, int argc)
{
	if (argc == 2 && sorted(stack_a) == false)
		swap_a(stack_a);
}

//my very own sort 3 function that uses recurssion

void	sort_three_sort_a(t_stack_mom *a, int argc)
{
	if (argc == 3 & sorted(a) == false)
	{
		if (a->array[a->top] > a->array[a->top - 1]
			&& a->array[a->top] < a->array[a->top - 2])
			swap_a(a);
		else if (a->array[a->top] < a->array[a->top - 1]
			&& a->array[a->top] > a->array[a->top - 2])
			rev_rot_a(a);
		else if (a->array[a->top] > a->array[a->top - 1]
			&& a->array[a->top] > a->array[a->top - 2])
			rot_a(a);
		else if (a->array[a->top] < a->array[a->top - 1]
			&& a->array[a->top] < a->array[a->top - 2])
			swap_a(a);
		if (sorted(a) == false)
			sort_three_sort_a(a, argc);
	}
}


// void	sort_big(t_stack_mom *a, t_stack_mom *b)
// {
// 	if (a->top > 2 && sorted(a) == false)
// 	{
// 		// push first 2 values to b
// 		if (sorted(a) == false)
// 			push_b(a, b);
// 		if (a->top > 2 && sorted(a) == false)
// 			push_b(a, b);
	
// 		int a_cost = 0;
// 		int b_cost = 0;
// 		int total_cost = 0;
// 		int best_cost = a->stack_size; //worst case scenario
// 		int best_a = 0;
// 		int best_b = 0;
// 		int	loops_a = a->stack_size;

// 		int temp_acost = 0;
// 		int temp_bcost = 0;

// 		while (loops_a-- > 0) // for every a
// 		{
			
// 			b_cost = 0;
// 			int loops = b->stack_size;
// 			temp_acost = a_cost;

// 			while (loops-- > 0) // for every b
// 			{
// 					temp_bcost = b_cost;
// 				// find out if a top fits in current b top
// 				if (a->array[a->top] > maximum_value(b) && b->array[b->top] == maximum_value(b)
// 					|| a->array[a->top] < b->array[0] && a->array[a->top] > b->array[b->top]
// 					|| b->array[b->top] == maximum_value(b) && a->array[a->top] < b->array[b->top])
// 				{
					
// 					// a function should utilise this to return a -ve or +ve for a reverse rotation
// 					// this is to check if reverse rotate is cheaper hence the added -ve to distinguish
// 					//if ((b->stack_size - b_cost) < b_cost)
// 					//	temp_bcost = - (b->stack_size - b_cost);

// 					//if ((a->stack_size - a_cost) < a_cost)
// 					//	temp_acost = - (a->stack_size - a_cost);
					
// 					// this is correct spot
// 					// make sure that total_cost is positive
// 					// abs returns the absolute value (positive value no matter what)
// 					total_cost = abs(temp_acost) + abs(temp_bcost);

// 					//build this helper function
// 					// abs(int)
// 					// if (int < 0)
// 					// return -int
// 					// else
// 					// return int

// 					if ( total_cost < best_cost)
// 					{
// 						//now we found the new best move
// 						best_cost = total_cost;
// 						best_a = temp_acost;
// 						best_b = temp_bcost;
// 					}
// 				}	
// 				// it didnt fit
// 				b_cost++;
// 				rotate (b);
				
// 			}
// 			// now we know cost to rotate b to correct possition
// 		}
// 		a_cost++;
// 		// rotate (a);
// 	}

// 	//we went through all thee numbers and stored the best move
// 	while (best_a > 0)
// 	{
// 		rot_a(a);
// 		best_a--;
// 	}

// 	while (best_a < 0)
// 	{
// 		rev_rot_a(a);
// 		best_a++;
// 	}

// 	while (best_b > 0)
// 	{
// 		rot_b(b);
// 		best_b--;
// 	}
	
// 	push_b(a, b);
	
	
// }

