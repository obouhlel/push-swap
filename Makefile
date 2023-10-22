# Name
NAME		= push_swap
BONUS		= checker

# Directories
SRCS_PATH	:= srcs/
OBJS_PATH	:= objs/
INCS_PATH	:= incs/

# Files
UTILS		= utils/convertion.c utils/string.c utils/print.c utils/split.c utils/free.c utils/memory.c utils/get_next_line.c utils/get_next_line_utils.c
MOVE		= move/swap.c move/push.c move/rotate.c move/rotate_reverse.c
SORT		= sort/sort.c sort/sort_utils.c sort/sort_utils_bis.c
STACK		= parsing.c stack.c info.c
SRCS		= main.c $(STACK) $(SORT) $(MOVE) $(UTILS)
SRCS_BONUS	= bonus/main.c bonus/checker.c $(STACK) $(MOVE) $(UTILS)
SRCS		:= $(addprefix $(SRCS_PATH), $(SRCS))
SRCS_BONUS	:= $(addprefix $(SRCS_PATH), $(SRCS_BONUS))
OBJS		:= $(subst $(SRCS_PATH), $(OBJS_PATH), $(SRCS:.c=.o))
OBJS_BONUS	:= $(subst $(SRCS_PATH), $(OBJS_PATH), $(SRCS_BONUS:.c=.o))
DEPS		:= $(OBJS:.o=.d)
DEPS_BONUS	:= $(OBJS_BONUS:.o=.d)

# Compilator
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror -MMD -g3 -I $(INCS_PATH)

# Rules
all		: $(NAME)

bonus	: $(BONUS)

$(NAME)	: $(OBJS)
		$(CC) $(OBJS) -o $(NAME)

$(BONUS): $(OBJS_BONUS)
		$(CC) $(OBJS_BONUS) -o $(BONUS)

test	: $(NAME) $(BONUS)
		./tester.sh

clean	:
		rm -rf $(OBJS_PATH) $(DEPS) $(OBJS) $(OBJS_BONUS) $(DEPS_BONUS)

fclean	: clean
		rm -f $(NAME) $(BONUS)

re		: fclean all

norme	:
		norminette $(SRCS_PATH) $(INCS_PATH)

.PHONY	: all clean fclean re norme

# Rules for .o files
$(OBJS_PATH)%.o : $(SRCS_PATH)%.c
		@mkdir -p $(@D)
		$(CC) $(CFLAGS) -c $< -o $@

# Dependencies
-include $(DEPS) $(DEPS_BONUS)