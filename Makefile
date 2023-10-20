# Name
NAME		= push_swap

# Directories
SRCS_PATH	:= ./srcs/
OBJS_PATH	:= ./objs/
INCS_PATH	:= ./incs/

# Files
SRCS		= main.c parsing.c stack.c info.c sort.c sort_utils.c sort_utils_bis.c
SRCS		+= utils/convertion.c utils/string.c utils/print.c utils/split.c utils/free.c utils/memory.c
SRCS		+= api/swap.c api/push.c api/rotate.c api/rotate_reverse.c
SRCS		+= list/lst_new.c list/add_back.c list/last_node.c list/lst_size.c list/lst_clear.c
SRCS		+= debug.c
SRCS		:= $(addprefix $(SRCS_PATH), $(SRCS))
OBJS		:= $(SRCS:$(SRCS_PATH)%.c=$(OBJS_PATH)%.o)
DEPS		:= $(OBJS:.o=.d)

# Compilator
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror -MMD -g3 -I $(INCS_PATH)

# Rules
all		: $(NAME)

$(NAME)	: $(OBJS)
		$(CC) $(OBJS) -o $(NAME)

clean	:
		rm -rf $(OBJS_PATH)

fclean	: clean
		rm -f $(NAME)

re		: fclean all

.PHONY	: all clean fclean re

# Rules for .o files
$(OBJS_PATH)%.o : $(SRCS_PATH)%.c
		@mkdir -p $(@D)
		$(CC) $(CFLAGS) -c $< -o $@

# Dependencies
-include $(DEPS)