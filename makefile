# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: octavie <octavie@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/19 10:24:32 by octavie           #+#    #+#              #
#    Updated: 2025/07/08 16:50:50 by octavie          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# =============================== VARIABLES =================================== #


NAME		= philo
INCLUDE		= include
LIBFT		= libft
SRC_DIR		= srcs/
CC			= cc
CFLAGS		= -Wall -Werror -Wextra
RM			= rm
AR			= ar rcs

# ================================ COULEURS =================================== #

DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m
NC = \033[0m # No Color

# =============================== SOURCES ===================================== #

SRC_FILES	= \
			main \
			init \
			parsing \
			utils \
			mylib \
			

SRC 		= 	$(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJ 		= 	$(addprefix $(SRC_DIR), $(addsuffix .o, $(SRC_FILES)))

# ============================== REGLES PRINCIPALES ========================== #

# all:		$(NAME)

# $(NAME):	$(OBJ)
# 			@echo "$(YELLOW)>>> Compilation de libft <<<$(DEF_COLOR)"
# 			make -C $(LIBFT)
# 			cp $(LIBFT)/libft.a .
# 			$(CC) $(CFLAGS) $(SRC) -o $(NAME) libft.a
# 			@echo "$(GREEN)>>> libft.a créé avec succès <<<$(DEF_COLOR)"

# $(SRC_DIR)%.o: $(SRC_DIR)%.c
# 			@echo "$(YELLOW)Compiling: $< $(DEF_COLOR)"
# 			$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@


# ================================== CLEAN ==================================== #

clean:
			@echo "$(YELLOW)Cleaning object files...$(NC)"
			$(RM) -f $(OBJ)
			make clean -sC $(LIBFT)
			$(RM) -f libft.a
			@echo "$(GREEN)Object files cleaned!🧹​$(NC)"

fclean:		clean
			@echo "$(YELLOW)Cleaning all files...$(NC)"
			$(RM) -f $(NAME)
			$(RM) -f libft.a
			$(RM) -f $(LIBFT)/libft.a
			@echo "$(GREEN)All files cleaned! 🧹​$(NC)"

# ================================= REBUILD =================================== #

re:			fclean all
			@echo "$(GREEN)>>> Cleaned and rebuilt everything for PHILO ! 💯​ <<<$(DEF_COLOR)"

# ================================ PHONY ====================================== #

.PHONY:		all clean fclean re