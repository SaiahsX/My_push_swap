SRCS     =   argument_sanitization.c \
             first_sort_operation.c \
             format_argument.c \
             push_swap.c \
            push_utilities.c \
            rotate_utilities.c \
            sorting_operation.c \
            sorting_utilities.c \
            swap_utilities_1.c \
            utilities.c \
			final_sort.c \
			rotate_operation.c \
			special_indx.c \

OFILES    =    $(SRCS:.c=.o)
CC        =    cc
RM        =    -rm -rf
CFLAGS    =    -Wall -Wextra -Werror

NAME    =    push_swap

all:        $(NAME)

$(NAME):	$(OFILES)
	@ $(MAKE) -C ./MY_LIBFT
	@ $(CC) $(CFLAGS) $(OFILES) ./MY_LIBFT/libft.a -o $(NAME)

norm:
	norminette $(SRCS)

debug: CFLAGS += -g -fsanitize=address
debug: re

%.o: %.c
	$(CC) -c $(CFLAGS) $?

clean:
		@ make -C ./MY_LIBFT fclean
		$(RM) $(OFILES) $(BOFILES)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re norm debug