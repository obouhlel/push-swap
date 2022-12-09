SRCS_libft			=  libft/char/ft_isalnum.c libft/char/ft_isalpha.c libft/char/ft_isascii.c libft/char/ft_isdigit.c \
					libft/char/ft_isprint.c libft/char/ft_tolower.c libft/char/ft_toupper.c \
					libft/conversion/ft_atoi.c libft/conversion/ft_atoi_long.c libft/conversion/ft_itoa.c \
					libft/list/ft_lstadd_back.c libft/list/ft_lstadd_front.c libft/list/ft_lstclear.c libft/list/ft_lstdelone.c \
					libft/list/ft_lstiter.c libft/list/ft_lstlast.c libft/list/ft_lstmap.c libft/list/ft_lstnew.c libft/list/ft_lstsize.c \
					libft/list/ft_lstdelone_relink.c libft/list/ft_lstprint_num.c \
					libft/malloc/ft_calloc.c libft/malloc/ft_split.c libft/malloc/ft_strdup.c libft/malloc/ft_strjoin.c libft/malloc/ft_strjoin_free.c libft/malloc/ft_strmapi.c \
					libft/malloc/ft_strtrim.c libft/malloc/ft_substr.c libft/mem/ft_bzero.c libft/mem/ft_memchr.c libft/mem/ft_memcmp.c \
					libft/mem/ft_memcpy.c libft/mem/ft_memmove.c libft/mem/ft_memset.c \
					libft/print/ft_putchar_fd.c libft/print/ft_putendl_fd.c libft/print/ft_putnbr_fd.c libft/print/ft_putstr_fd.c \
					libft/string/ft_strchr.c libft/string/ft_striteri.c libft/string/ft_strlcat.c libft/string/ft_strlcpy.c \
					libft/string/ft_strlen.c libft/string/ft_strncmp.c libft/string/ft_strnstr.c libft/string/ft_strrchr.c

OBJS_libft			= ${SRCS_libft:.c=.o}

HEADER_libft		= libft/libft.h

LIB					= libft.a

SRCS_push_swap		= ft_printcolor.c main_push_swap.c push_swap_algo.c push_swap_check.c push_swap_error_1.c push_swap_error_2.c \
			  		push_swap_sort_a.c push_swap_sort_all.c push_swap_sort_b.c push_swap_sort.c

OBJS_push_swap		= ${SRCS_push_swap:.c=.o}

HEADER_push_swap	= push_swap.h

CC					= gcc

CFLAGS				= -Wall -Wextra -Werror -g3

NAME				= push_swap

%.c					: %.o
					${CC} ${CFLAGS} -c $< -o libft/$@

all					: ${OBJS_libft} ${OBJS_push_swap}
					ar rcs ${LIB} ${OBJS_libft}
					${CC} ${CFLAGS} ${OBJS_push_swap} ${LIB} -o ${NAME}

${NAME}				: all

clean				:
					rm -f ${OBJS_libft} ${OBJS_push_swap} ${LIB}

fclean				: clean
					rm -f ${NAME}

re					: fclean all

.PHONY				: all clean fclean re
