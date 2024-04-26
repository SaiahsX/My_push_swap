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

OFILES    =    $(SRCS:.c=.o)

# BOFILES   =    $(BONUS_SRCS:.c=.o)

CC        =    cc
RM        =    -rm -rf
CFLAGS    =    -Wall -Wextra -Werror

NAME    =    push_swap.a

all:        $(NAME)

$(NAME):	$(OFILES)
	@ $(MAKE) -C ./MY_LIBFT
	@ $(CC) $(CFLAGS) $(OFILES) ./MY_LIBFT/libft.a -o $(NAME)
	# @ $(CC) $(CFLAGS) $(BOFILES) ./libft.a -o $(BONUS)
	# ar -rcs $(NAME) $(OFILES)

norm:
	norminette $(SRCS)

# BONUS = .bonus

# bonus:  ${BONUS}

# ${BONUS}:   $(OFILES) $(BOFILES)
# 		ar -rcs $(NAME)  $(OFILES) $(BOFILES)
# 		touch ${BONUS}

# ${BOFILES}:     ${BONUS_SRCS}
# 		cc	${CFLAGS}	-c ${BONUS_SRCS}	-I	libft.h

%.o: %.c
	$(CC) -c $(CFLAGS) $?

clean:
		@ make -C ./MY_LIBFT fclean
		$(RM) $(OFILES) $(BOFILES)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re norm