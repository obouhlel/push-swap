NAME		= push_swap

#PATH
SRCS_PATH	:=	./srcs/
OBJS_PATH	:=	./objs/
INCS_PATH	:=	./incs/

#FILES
SRCS		:= main.c
SRCS		:= ${addprefix ${SRCS_PATH}, ${SRCS}}
OBJS		:= ${SRCS:.c=.o}
OBJS		:= ${subst ${SRCS_PATH}, ${OBJS_PATH}, ${OBJS}}
DEPS		:= ${OBJS:.o=.d}

#COMPILATION
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror -MMD -g3 -I ${INCS_PATH}

#RULES
all		: ${NAME}

${NAME}	: ${OBJS}
		${CC} ${OBJS} -o ${NAME}

clean	:
		rm -rf ${OBJS_PATH}

fclean	: clean
		rm -f ${NAME}

re		: fclean all

.PHONY	: all clean fclean re

${OBJS_PATH}%.o : ${SRCS_PATH}%.c
		@mkdir -p ${OBJS_PATH}
		${CC} ${CFLAGS} -c $< -o $@

-include ${DEPS}