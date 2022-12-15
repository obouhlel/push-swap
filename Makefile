SRCS	= main_push_swap.c \
		algo/1_push_swap_algo_main.c \
		algo/2_push_swap_algo_3.c \
		algo/3_push_swap_algo_5.c \
		algo/40_push_swap_algo_price.c \
		algo/41_push_swap_algo_med.c \
		algo/4_push_swap_algo_n.c \
		algo/push_swap_algo_calcule.c \
		error_check/push_swap_check.c \
		error_check/push_swap_error_1.c \
		error_check/push_swap_error_2.c \
		info/ft_init_info.c \
		sort/0_push_swap_sort.c \
		sort/1_push_swap_sort_all.c \
		sort/2_push_swap_sort_a.c \
		sort/3_push_swap_sort_b.c \
		stack/ft_stackadd_back.c \
		stack/ft_stackadd_front.c \
		stack/ft_stackclear.c \
		stack/ft_stackdelone.c \
		stack/ft_stackdelone_relink.c \
		stack/ft_stack_init_id.c \
		stack/ft_stacklast.c \
		stack/ft_stacknew.c \
		stack/ft_stackprint_color.c \
		stack/ft_stackprint_num_fd.c \
		stack/ft_stacksize.c \
		libft/ft_atoi.c \
		libft/ft_atoi_long.c \
		libft/ft_putchar_fd.c \
		libft/ft_putendl_fd.c \
		libft/ft_putnbr_fd.c \
		libft/ft_putstr_fd.c \
		libft/ft_split.c \
		libft/ft_strjoin.c \
		libft/ft_strjoin_free.c \
		libft/ft_strlen.c \
		libft/ft_isdigit.c \
		libft/ft_calloc.c \
		libft/ft_strlcat.c \
		libft/ft_bzero.c

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
