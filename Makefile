SRCS	=

OBJS	= ${SRCS:.c=.o}

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror -g3

NAME	= push_swap

%.c		: %.o
		${CC} ${CFLAGS} -c $< -o $@

all		: ${OBJS}
		${CC} ${CFLAGS} *.c libft.a -o ${NAME}