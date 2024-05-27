/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_operation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 20:15:21 by oadewumi          #+#    #+#             */
/*   Updated: 2024/05/24 13:20:41 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void	rev_rot_a(t_stack_mom *stack_a)
{
	reverse_rotate(stack_a);
	write(1, "rra\n", 4);
}
