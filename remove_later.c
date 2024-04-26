
#include <stdio.h>
// int main(void)
// {
// 	char	array[2];

// 	array[0] = '+';
// 	array[1] = '\0';
// 	if (ft_strchr("+-# ", array[0]) != NULL)
// 		printf("Wow we found it!\n");
// 	else
// 		printf("The given character is not in the str\n");
// }


// evaluate_inp_arg mains
// int	main(void)
// {
// 	char	*array;

// 	array = "--012";
// 	//array[1] = '\0';
// 	//if (ft_strchr("+-# ", array[0]) != NULL)
// 	if (ft_numeric_check (array) == '\0')
// 		printf("Wow we found it!\n");
// 	else
// 		printf("The given character is not in the str\n");
// 	return (0);
// }



// Old mains where and argument index is used. (a bse for what i used)
// int	main(int argc, char **argv)
// {
// 	int		arg_indx;
// 	char	**input_args;

// 	arg_indx = 0;
// 	if (argc <= 1)
// 		return (0);
// 	if (argc == 2)
// 	{
// 		evaluate_inp_arg(argv);
// 		// input_args = ft_split(argv[1], 32);
// 		argv = ft_split(argv[1], 32);
// 	}
// 	else
// 	{
// 		argv = &argv[1];
// 		// input_args = &argv[1];
// 		arg_indx = 1;
// 	}
// 	//sanitize_args(input_args, arg_indx);
// 	sanitize_args(argv);
// }


// int	ft_dupli_check(char **arg_arr)
// {
// 	int	i;
// 	int	j;

// 	i = 0;
// 	while (arg_arr[i] != NULL)
// 	{
// 		j = i + 1;
// 		while (arg_arr[j] != NULL)
// 		{
// 			printf("%s, %s\n", arg_arr[i], arg_arr[j]);
// 			if (ft_strncmp(arg_arr[i], arg_arr[j], ft_strlen(arg_arr[j]) + 1) == 0)
// 				ft_error();
// 			j++;
// 		}
// 		i++;
// 	}
// 	return (0);
// }

// // Duplicate check 
// #include <stdio.h>

// int	main(int argc, char **argv)
// {
// 	(void)argc;
// 	(void)argv;
// 	char	*array;
// 	char	**split_arr;

// 	array = "a b c b e";
// 	split_arr = ft_split(array, ' ');

// 	//if (argc > 1)
// 	{
// 		if (ft_dupli_check(split_arr) != '\0')
// 			printf("Wow we found it!\n");
// 		else
// 			printf("The given character is not in the str\n");
// 	}
// 	return (0);
// }

// // for dupicte check when parsing args from command line
// #include <stdio.h>

// int	main(int argc, char **argv)
// {
// 	if (argc > 1)
// 	{
// 		if (ft_dupli_check(&argv[1]) != '\0')
// 			printf("Wow we found it!\n");
// 		else
// 			printf("The given character is not in the str\n");
// 	}
// 	return (0);
// }




// void	only_three_sort_a(t_stack_mom *stack_a, int argc)
// {
// 	int	*stack;

// 	stack = stack_a->array;
// 	if (argc == 3 & sorted(stack_a) == false)
// 	{
// 		if (stack[stack_a->top - 1] < stack[stack_a->top - 2]
// 			&& stack[stack_a->top] < stack[stack_a->top - 2])
// 		{
// 			swap_a(stack_a);
// 			return ;
// 		}
// 		if (stack[stack_a->top] < stack[stack_a->top - 1])
// 		{
// 			if (stack[stack_a->top - 1] > stack[stack_a->top - 2])
// 				rev_rot_a(stack_a);
// 			else
// 				rot_a(stack_a);
// 		}
// 		else
// 			rev_rot_a(stack_a);
// 		if (sorted(stack_a) == false)
// 			swap_a(stack_a);
// 	}
// }



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



// Armins method adoption for sort 3 but too long
/* void	sort_three_sort_a(t_stack_mom *a, int argc)
{
	if (argc == 3)
	{
		if (a->array[a->top] > a->array[a->top - 1]
			&& a->array[a->top] < a->array[a->top - 2]
			&& a->array[a->top - 1] < a->array[a->top - 2])
			swap_a(a);
		else if (a->array[a->top] > a->array[a->top - 1]
			&& a->array[a->top] > a->array[a->top - 2]
			&& a->array[a->top - 1] < a->array[a->top - 2])
			rot_a(a);
		else if (a->array[a->top] < a->array[a->top - 1]
			&& a->array[a->top] > a->array[a->top - 2]
			&& a->array[a->top - 1] > a->array[a->top - 2])
			rev_rot_a(a);
		else if (a->array[a->top] > a->array[a->top - 1]
			&& a->array[a->top - 1] > a->array[a->top - 2])
		{
			swap_a(a);
			rev_rot_a(a);
		}
		else if (a->array[a->top] < a->array[a->top - 1]
			&& a->array[a->top - 1] > a->array[a->top - 2])
		{
			swap_a(a);
			rot_a(a);
		}
	}
} */



// python file that can be run with my a.out and against a checker to check sort3 num
// save this in a new .py file. suggested name - 3_num_perm.py
// run with python3 3_num_perm.py  


/* import itertools
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
    print(output.stdout)  */
