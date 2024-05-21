
#include <stdio.h>
/* int main(void)
{
	char	arr[2];

	arr[0] = '+';
	arr[1] = '\0';
	if (ft_strchr("+-# ", arr[0]) != NULL)
		printf("Wow we found it!\n");
	else
		printf("The given character is not in the str\n");
} */


// evaluate_inp_arg mains
/* int	main(void)
{
	char	*arr;

	arr = "--012";
	//arr[1] = '\0';
	//if (ft_strchr("+-# ", arr[0]) != NULL)
	if (ft_numeric_check (arr) == '\0')
		printf("Wow we found it!\n");
	else
		printf("The given character is not in the str\n");
	return (0);
} */



// Old mains where and argument index is used. (a bse for what i used)
/* int	main(int argc, char **argv)
{
	int		arg_indx;
	char	**input_args;

	arg_indx = 0;
	if (argc <= 1)
		return (0);
	if (argc == 2)
	{
		evaluate_inp_arg(argv);
		// input_args = ft_split(argv[1], 32);
		argv = ft_split(argv[1], 32);
	}
	else
	{
		argv = &argv[1];
		// input_args = &argv[1];
		arg_indx = 1;
	}
	//sanitize_args(input_args, arg_indx);
	sanitize_args(argv);
} */


/* int	ft_dupli_check(char **arg_arr)
{
	int	i;
	int	j;

	i = 0;
	while (arg_arr[i] != NULL)
	{
		j = i + 1;
		while (arg_arr[j] != NULL)
		{
			printf("%s, %s\n", arg_arr[i], arg_arr[j]);
			if (ft_strncmp(arg_arr[i], arg_arr[j], ft_strlen(arg_arr[j]) + 1) == 0)
				ft_error();
			j++;
		}
		i++;
	}
	return (0);
} */


// // Duplicate check 
/* #include <stdio.h>

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	char	*arr;
	char	**split_arr;

	arr = "a b c b e";
	split_arr = ft_split(arr, ' ');

	//if (argc > 1)
	{
		if (ft_dupli_check(split_arr) != '\0')
			printf("Wow we found it!\n");
		else
			printf("The given character is not in the str\n");
	}
	return (0);
}
*/


// for dupicte check when parsing args from command line
/*#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		if (ft_dupli_check(&argv[1]) != '\0')
			printf("Wow we found it!\n");
		else
			printf("The given character is not in the str\n");
	}
	return (0);
} */



// from shaboom
/* void	only_three_sort_a(t_stack_mom *stack_a, int argc)
{
	int	*stack;

	stack = stack_a->arr;
	if (argc == 3 & sorted(stack_a) == false)
	{
		if (stack[stack_a->top - 1] < stack[stack_a->top - 2]
			&& stack[stack_a->top] < stack[stack_a->top - 2])
		{
			swap_a(stack_a);
			return ;
		}
		if (stack[stack_a->top] < stack[stack_a->top - 1])
		{
			if (stack[stack_a->top - 1] > stack[stack_a->top - 2])
				rev_rot_a(stack_a);
			else
				rot_a(stack_a);
		}
		else
			rev_rot_a(stack_a);
		if (sorted(stack_a) == false)
			swap_a(stack_a);
	}
} */


// for strings
/* static void	print_all_str(char **str)
{
	int	i;

	i = 0;
	while (str[i] != NULL)
	{
		printf("%s", str[i]);
		i++;
	}
	printf("\n");
} */

//for ints
/* static void	print_all_str(int *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		printf("%d\n", str[i]);
		i++;
	}
	printf("\n");
} */

// for printing arrays.
/* static void	print_array(t_stack_mom *a)
static void	print_array(t_stack_mom *a)
{
	int	i;
	int	x;

	x = 0;
	i = a->top;
	while (i > -1)
	{
		printf("%d\n", a->arr[i]);
		i--;
		x++;
	}
	if (sorted(a) == true)
		printf("yes, it is very well sorted\n");
	printf("x_count %d", x);
	printf("\n");
 */


// Armins method adoption for sort 3 but too long
/* void	sort_three_sort_a(t_stack_mom *a, int argc)
{
	if (argc == 3)
	{
		if (a->arr[a->top] > a->arr[a->top - 1]
			&& a->arr[a->top] < a->arr[a->top - 2]
			&& a->arr[a->top - 1] < a->arr[a->top - 2])
			swap_a(a);
		else if (a->arr[a->top] > a->arr[a->top - 1]
			&& a->arr[a->top] > a->arr[a->top - 2]
			&& a->arr[a->top - 1] < a->arr[a->top - 2])
			rot_a(a);
		else if (a->arr[a->top] < a->arr[a->top - 1]
			&& a->arr[a->top] > a->arr[a->top - 2]
			&& a->arr[a->top - 1] > a->arr[a->top - 2])
			rev_rot_a(a);
		else if (a->arr[a->top] > a->arr[a->top - 1]
			&& a->arr[a->top - 1] > a->arr[a->top - 2])
		{
			swap_a(a);
			rev_rot_a(a);
		}
		else if (a->arr[a->top] < a->arr[a->top - 1]
			&& a->arr[a->top - 1] > a->arr[a->top - 2])
		{
			swap_a(a);
			rot_a(a);
		}
	}
} */

//This is a debugger for sort_3
/*  void	sort_three_sort_a(t_stack_mom *a)
{
	if (a->top == 2 & sorted(a) == false)
	{
		if (a->arr[a->top] > a->arr[a->top - 1]
			&& a->arr[a->top] < a->arr[a->top - 2])
		{
			printf("This is the top indx of stk_a b4 a swap= %d\n", a->top);
			printf("This is the top value of stk_a b4 a swap= %d\n", a->arr[a->top]);
			swap_a(a);
			printf("This is the top indx of stk_a after a swap= %d\n", a->top);
			printf("This is the top value of stk_a after a swap= %d\n\n", a->arr[a->top]);
		}
		else if (a->arr[a->top] < a->arr[a->top - 1]
			&& a->arr[a->top] > a->arr[a->top - 2])
		{
			printf("This is the top indx of stk_a b4 a rev_rot= %d\n", a->top);
			printf("This is the top value of stk_a b4 a rev_rot= %d\n", a->arr[a->top]);
			rev_rot_a(a);
			printf("This is the top indx of stk_a after a rev_rot= %d\n", a->top);
			printf("This is the top value of stk_a after a rev_rot= %d\n\n", a->arr[a->top]);
		}
		else if (a->arr[a->top] > a->arr[a->top - 1]
			&& a->arr[a->top] > a->arr[a->top - 2])
		{
			printf("This is the top indx of stk_a b4 a rot= %d\n", a->top);
			printf("This is the top value of stk_a b4 a rot= %d\n", a->arr[a->top]);
			rot_a(a);
			printf("This is the top indx of stk_a after a rot= %d\n", a->top);
			printf("This is the top value of stk_a after a rot= %d\n\n", a->arr[a->top]);
		}
		else if (a->arr[a->top] < a->arr[a->top - 1]
			&& a->arr[a->top] < a->arr[a->top - 2])
		{
			printf("This is the top indx of stk_a b4 a 2nd swap= %d\n", a->top);
			printf("This is the top value of stk_a b4 a 2nd swap= %d\n", a->arr[a->top]);
			swap_a(a);
			printf("This is the top indx of stk_a after a 2nd swap= %d\n", a->top);
			printf("This is the top value of stk_a after a 2nd swap= %d\n\n", a->arr[a->top]);
		}
		if (sorted(a) == false)
			sort_three_sort_a(a);
	}
}
*/



//This fuction compares one int at a time from stk_a against all stk_b 
// This contains some printf for debugging
/* void	get_cost(t_stack_mom *a, t_stack_mom *b, t_cost *t)
{
	t_cost	xa;
	t_cost	xb;
	int		size_a;
	int		size_b;

	size_a = a->top;
	size_b = b->top;
	init(&xa, &xb, t);
	printf("max top of a %d\n", a->top);
	printf("max top of b %d\n", b->top);
	printf("stack size of b %d\n", b->stack_size);
	printf("stack size of a %d\n", a->stack_size);
	printf("max value of stack_b %d\n", max(b));
	printf("top value of stack_a %d\n", a->arr[a->top]);
	printf("top value of stack_b %d\n", b->arr[b->top]);
	printf("bottom of stack_b %d\n", b->arr[0]);
	while ((size_a--) > 0)
	{
		xb.b_cost = 0;
		xa.temp_acost = xa.a_cost;
		while ((size_b--) > 0)
		{
			xb.temp_bcost = xb.b_cost;
	// find out if a top fits in current b top
			if ((a->arr[a->top] > max(b) && b->arr[b->top] == max(b))
				|| (a->arr[a->top] < b->arr[0] && a->arr[a->top] > b->arr[b->top])
				//|| (a->arr[a->top] < max(b) && b->arr[b->top] == max(b)))
				|| (a->arr[a->top] < b->arr[b->top] && b->arr[b->top] == max(b)))
				{
					//check_best_rotation(b, xb.b_cost, xb.temp_bcost);
				// this is correct spot

					update_total_cost(&xa, &xb, t);
				}
				// it didnt fit
				xb.b_cost++;
				printf("we are rotating b\n");
				rotate (b);
		}
		break;
		// now we know cost to rotate b to correct possition
		xa.a_cost++;
		rotate (a);
	}
} 
*/

//for safe keeping because of the printf
/* void	sort(t_stack_mom *a, t_stack_mom *b)
{
	t_cost	t;

	printf("top b after before push: %d\n", b->top);
	printf("the value at the top of stk_b before push, it should be garbage= %d\n", b->arr[b->top]);
	if (a->top > 2 && sorted(a) == false)
		push_b(a, b);
	printf("top b after first push: %d\n", b->top);
	printf("the value at the top of stk_b= %d\n", b->arr[b->top]);
	//printf("top b is now: %d\n", get_top_value(b));
	if (a->top > 2 && sorted(a) == false)
		push_b(a, b);
	printf("top b index  after 2nd push: %d\n", b->top);
	printf("the value at the top of stk_b= %d\n", b->arr[b->top]);
	if (a->top > 2 && sorted(a) == false)
	{
	//	sort_big(a, b);
		t = (t_cost){0};
		get_cost(a, b, &t);
		//get_cost(a, b);
		do_rotations(a, b, &t);
		//do_rotations(a, b);
		printf("value at the top of stk_b after real push= %d\n", b->arr[b->top]);
		printf("value at the top of stk_b - 1 after real push= %d\n", b->arr[b->top - 1]);
		printf("value at the top of stk_b - 2 after real push= %d\n", b->arr[b->top - 2]);
	}
}
 */


//This function helps to get the top value from a stack
/* 
int	get_top_value(t_stack_mom *stack)
{
	if (stack->top > 0)
		return (stack->arr[stack->top]);
	return (-100);
}
*/


// python file that can be run with my a.out and against a checker to check sort3 num
// save this in a new .py file. suggested name - 3_num_perm.py
// run with python3 3_num_perm.py  
/*
import itertools
import subprocess

# Generate all permutations of 1, 2, 3
permutations = list(itertools.permutations([1, 2, 3]))

# Iterate over each permutation
for perm in permutations:
    # Convert the permutation to a string with spaces between numbers
    perm_str = ' '.join(map(str, perm))
    
    # Print the permutation being tested
    print("Testing permutation:", perm_str)
    
    # Run a.out with the current permutation as input and pipe the output to checker_mac
    command = f"./a.out {perm_str} && ./a.out {perm_str} | ./checker_Mac {perm_str}"
    
    # Execute the command and capture the output
    output = subprocess.run(command, shell=True, capture_output=True, text=True)
    
    # Print the output from checker_mac
    print(output.stdout) 
*/



//// this is needed and can be put back later

// //This fuction compares one int at a time from stk_a against all stk_b 
// //void	get_cost(t_stack_mom *a, t_stack_mom *b)
// void	get_cost(t_stack_mom *a, t_stack_mom *b, t_cost *t)
// {
// 	t_cost	x;

// 	//init_cost(&x, t);
// 	init_cost(&x, t, a, b);
// 	while ((x.top_a--) >= 0)
// 	{
// 		x.b_cost = 0;
// 		x.temp_acost = x.a_cost;
// 		while ((x.top_b--) >= 0)
// 		{
// 			x.temp_bcost = x.b_cost;
// 	// find out if a top fits in current b top
// 			if ((a->arr[a->top] > max(b) && b->arr[b->top] == max(b))
// 				|| (a->arr[a->top] < b->arr[0] && a->arr[a->top] > b->arr[b->top])
// 				//|| (a->arr[a->top] < max(b) && b->arr[b->top] == max(b)))
// 				|| (a->arr[a->top] < b->arr[b->top] && b->arr[b->top] == max(b)))
// 				{
// 					//check_best_rotation(b, xb.b_cost, xb.temp_bcost);
// 				// this is correct spot

// 					update_total_cost(&x, t);
// 				}
// 				// it didnt fit
// 				x.b_cost++;
// 				printf("The cost has increased due to a rot = %d\n", x.b_cost);
// 				printf("we are rotating b\n");
// 				rotate (b);
// 		}
// 		printf("value at the top of stk_b = %d\n", b->arr[b->top]);
// 		printf("The current cost of b = %d\n", x.b_cost);
// 		//break;
// 		// now we know cost to rotate b to correct possition
// 		x.a_cost++;
// 		rotate (a);
// 	}
// }



//Modified radix sort (work in progress) to find a better rotation.
// it currently doesnt work. but thanks David Horvath fot this help.
// void	radix(t_stack_mom *a, t_stack_mom *b)
// {
// 	int	i;
// 	int	x;
// 	int	size;
// 	int	offset;
// 	int	needed_rot;
// 	int	rev_rot;

// 	offset = abslt(min(a)) + 1;
// 	apply_offset(a, offset);
// 	i = 0;
// 	while (i < a->top && (sorted(a) == false))
// 	{
// 		x = -1;
// 		size = a->top;
// 		needed_rot = 0;
// 		while (x++ < size && (a) != NULL && sorted(a) == false)
// 		{
// 			if (((a->arr[a->top] >> i) & 1) == 0)
// 			{
// 				// printf("%i\n", a->top - needed_rot);
// 				if (needed_rot > a->top - needed_rot)
// 				{
// 					rev_rot = a->top - needed_rot;
// 					while(needed_rot-- > 0)
// 						reverse_rotate(a);
// 					while (rev_rot-- > 0)
// 					{
// 						printf("yes we are rev rotating\n");
// 						rev_rot_a(a);
						
// 					}
// 				}
// 				else
// 				{
// 					while (needed_rot-- > 0)
// 						printf("ra\n");
// 				}
// 				push_b(a, b);
// 				needed_rot = 0;
// 			}
// 			else
// 			{
// 				rotate(a);
// 				needed_rot++;
// 			}
// 		}
// 		i++;
// 		radix_helper(a, b, i);
// 	}
// 	revert_offset(a, offset);
// 	print_array (a);
// }


//This is a print function i got and modified from Robert Korhonen
//This function print out in a robust way and visually both stacks .
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


//my initial pop function without zeroing
// int	pop(t_stack_mom *stack)
// {
// 	int	temp;

// 	if (stack->top > -1)
// 	{
// 		temp = stack->arr[stack->top--];
// 		return (temp);
// 	}
// 	ft_error ();
// 	return (-1);
// }