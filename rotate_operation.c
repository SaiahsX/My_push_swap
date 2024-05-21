/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_operation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 20:15:21 by oadewumi          #+#    #+#             */
/*   Updated: 2024/05/21 20:56:43 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"



void	rev_rot_ab(t_stack_mom *a, t_stack_mom *b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	write(1, "rrr\n", 4);
}

void	rot_a(t_stack_mom *stack_a)
{
	rotate(stack_a);
	write(1, "ra\n", 3);
}

void	rot_b(t_stack_mom *stack_b)
{
	rotate(stack_b);
	write(1, "rb\n", 3);
}

void	rot_ab(t_stack_mom *a, t_stack_mom *b)
{
	rotate(a);
	rotate(b);
	write(1, "rr\n", 3);
}
