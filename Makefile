# Nom de votre exécutable
NAME		= push_swap

# Répertoires
SRCS_PATH	:= ./srcs/
OBJS_PATH	:= ./objs/
INCS_PATH	:= ./incs/

# Fichiers source
SRCS		= main.c parsing.c
SRCS		+= utils/convertion.c utils/string.c utils/print.c utils/split.c utils/free.c
SRCS		:= $(addprefix $(SRCS_PATH), $(SRCS))
OBJS		:= $(SRCS:$(SRCS_PATH)%.c=$(OBJS_PATH)%.o)
DEPS		:= $(OBJS:.o=.d)

# Compilation
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror -MMD -g3 -I $(INCS_PATH)

# Règles
all		: $(NAME)

$(NAME)	: $(OBJS)
		$(CC) $(OBJS) -o $(NAME)

clean	:
		rm -rf $(OBJS_PATH)

fclean	: clean
		rm -f $(NAME)

re		: fclean all

.PHONY	: all clean fclean re

# Règle générique pour générer les fichiers objets
$(OBJS_PATH)%.o : $(SRCS_PATH)%.c
		@mkdir -p $(@D)
		$(CC) $(CFLAGS) -c $< -o $@

# Inclusion des fichiers de dépendances
-include $(DEPS)