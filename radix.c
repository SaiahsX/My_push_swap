


void	radixish_helper(t_node **stack_a, t_node **stack_b, int i)
{
	int	size;

	size = count_stack(stack_b);
	while (size > 0 && (*stack_b) != NULL)
	{
		if ((((*stack_b)->index >> i) & 1) == 0 && check_sorted(*stack_a) != 0)
			rb(stack_b, 1);
		else
			pa(stack_b, stack_a);
		size--;
	}
}

void	radixish(t_node **stack_a, t_node **stack_b, t_attic box)
{
	int	i;
	int	x;
	int	size;
	int	c;

	c = box.count;
	i = 0;
	while (i < box.count && (check_sorted(*stack_a) != 0))
	{
		x = 0;
		size = count_stack(stack_a);
		while (x++ < size && (*stack_a) != NULL && check_sorted(*stack_a) != 0)
		{
			if ((((*stack_a)->index >> i) & 1) == 0)
				pb(stack_a, stack_b);
			else
				ra(stack_a, 1);
		}
		i++;
		radixish_helper(stack_a, stack_b, i);
	}
}

t_node	send(t_node **stack_a, t_node **stack_b, t_attic box)
{
	int	x;

	x = 0;
	(*stack_a)->head = *stack_a;
	if (check_sorted(*stack_a) == -1)
	{
		if (box.count == 2)
			sort_two(stack_a);
		if (box.count == 3)
			sort_three(stack_a);
		else if (box.count < 7)
			sort_mini(stack_a, stack_b, box);
		else
		{
			indexing(stack_a, box);
			radixish(stack_a, stack_b, box);
		}
	}
	return (**stack_a);
}
