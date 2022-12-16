SRCS	= main_push_swap.c \
		algo/00_algo_calcule.c \
		algo/0_algo_main.c \
		algo/1_algo_3.c \
		algo/2_algo_5.c \
		algo/3_algo_n.c \
		algo/3_algo_lis.c \
		error_check/push_swap_check.c \
		error_check/push_swap_error_1.c \
		error_check/push_swap_error_2.c \
		info/info.c \
		libft/ft_atoi.c \
		libft/ft_atoi_long.c \
		libft/ft_bzero.c \
		libft/ft_calloc.c \
		libft/ft_isdigit.c \
		libft/ft_putchar_fd.c \
		libft/ft_putendl_fd.c \
		libft/ft_putnbr_fd.c \
		libft/ft_putstr_fd.c \
		libft/ft_putstrnbr_fd.c \
		libft/ft_split.c \
		libft/ft_strjoin.c \
		libft/ft_strjoin_free.c \
		libft/ft_strlcat.c \
		libft/ft_strlen.c \
		stack/ft_print_stack_color.c \
		stack/ft_stack_add_back.c \
		stack/ft_stack_add_front.c \
		stack/ft_stack_clear.c \
		stack/ft_stack_delone.c \
		stack/ft_stack_deltop.c \
		stack/ft_stack_id_init.c \
		stack/ft_stack_last.c \
		stack/ft_stack_new.c \
		stack/ft_stack_print_num_fd.c \
		stack/ft_stack_size.c \
		sort/0_sort.c \
		sort/1_sort_a.c \
		sort/2_sort_b.c \
		sort/3_sort_all.c

OBJS	= ${SRCS:.c=.o}

DEPS	= ${SRCS:.c=.d}

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror -g3

LIB		= libps.a

NAME	= push_swap

all		: ${NAME}

${NAME}	: ${DEPS} ${OBJS}
		ar rcs ${LIB} ${OBJS}
		${CC} ${CFLAGS} ${LIB} -o ${NAME}

clean	:
		rm -f ${OBJS} ${LIB} ${DEPS}

fclean	: clean
		rm -f ${NAME}

re		: fclean all

.PHONY	: all clean fclean re

%.o		: %.c
		${CC} ${CFLAGS} -c $< -o $@

%.d		: %.c
		${CC} ${CFLAGS} -MM $< -o $@

-include $(DEPS)
