SRCS	= srcs/main_push_swap.c \
		srcs/algo/00_algo_calcule.c \
		srcs/algo/0_algo_main.c \
		srcs/algo/1_algo_3.c \
		srcs/algo/2_algo_5.c \
		srcs/algo/30_algo_n.c \
		srcs/algo/31_algo_n_find.c \
		srcs/algo/31_algo_n_info_init.c \
		srcs/algo/31_algo_n_info_combot.c \
		srcs/algo/31_algo_n_med.c \
		srcs/algo/31_algo_n_move.c \
		srcs/error_check/push_swap_check.c \
		srcs/error_check/push_swap_error_1.c \
		srcs/error_check/push_swap_error_2.c \
		srcs/info/info.c \
		srcs/libft/ft_atoi.c \
		srcs/libft/ft_atoi_long.c \
		srcs/libft/ft_bzero.c \
		srcs/libft/ft_calloc.c \
		srcs/libft/ft_isdigit.c \
		srcs/libft/ft_putchar_fd.c \
		srcs/libft/ft_putendl_fd.c \
		srcs/libft/ft_putnbr_fd.c \
		srcs/libft/ft_putstr_fd.c \
		srcs/libft/ft_putstrnbr_fd.c \
		srcs/libft/ft_split.c \
		srcs/libft/ft_strjoin.c \
		srcs/libft/ft_strjoin_free.c \
		srcs/libft/ft_strlcat.c \
		srcs/libft/ft_strlen.c \
		srcs/stack/ft_print_stack_color.c \
		srcs/stack/ft_stack_add_back.c \
		srcs/stack/ft_stack_add_front.c \
		srcs/stack/ft_stack_clear.c \
		srcs/stack/ft_stack_delone.c \
		srcs/stack/ft_stack_deltop.c \
		srcs/stack/ft_stack_id_init.c \
		srcs/stack/ft_stack_pos_init.c \
		srcs/stack/ft_stack_last.c \
		srcs/stack/ft_stack_new.c \
		srcs/stack/ft_stack_print_num_fd.c \
		srcs/stack/ft_stack_size.c \
		srcs/sort/0_sort.c \
		srcs/sort/1_sort_a.c \
		srcs/sort/2_sort_b.c \
		srcs/sort/3_sort_all.c

OBJS	= ${SRCS:.c=.o}

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror -g3

LIB		= libps.a

HEADER	= ./includes/push_swap.h

NAME	= push_swap

all		: ${NAME}

${NAME}	: ${OBJS} ${HEADER}
		ar rcs ${LIB} ${OBJS}
		mv ${LIB} ./lib
		${CC} ${CFLAGS} ./lib/${LIB} -o ${NAME}

clean	:
		rm -f ${OBJS} ./lib/${LIB} ${DEPS}

fclean	: clean
		rm -f ${NAME}

re		: fclean all

.PHONY	: all clean fclean re

%.o		: %.c
		${CC} ${CFLAGS} -c $< -o $@