
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