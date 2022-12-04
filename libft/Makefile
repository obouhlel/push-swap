SRCS	= list/ft_lstadd_back.c list/ft_lstadd_front.c list/ft_lstclear.c list/ft_lstdelone.c \
		  list/ft_lstlast.c list/ft_lstnew.c list/ft_lstprint.c list/ft_lstsize.c \
		  list/ft_lstdelone_relink.c \
		  print/ft_putchar_fd.c print/ft_putendl_fd.c print/ft_putnbr_fd.c print/ft_putstr_fd.c \
		  conversion/ft_atoi.c conversion/ft_atoi_long.c \
		  char/ft_isalnum.c char/ft_isalpha.c char/ft_isascii.c char/ft_isdigit.c \
		  char/ft_isprint.c char/ft_tolower.c char/ft_toupper.c

OBJS	= ${SRCS:.c=.o}

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

LIB		= ar rc

NAME	= libft.a

RM		= rm -f

%.o		: %.c
		${CC} ${CFLAGS} -c $< -o $@

all		: ${OBJS}
		${LIB} ${NAME} ${OBJS}

${NAME}	: all

clean	:
		${RM} ${OBJS}

fclean	: clean
		${RM} ${NAME}

re		: fclean all

.PHONY	: all clean fclean re
