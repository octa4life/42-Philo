# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obellil- <obellil-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/19 10:24:32 by octavie           #+#    #+#              #
#    Updated: 2025/07/10 09:20:01 by obellil-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# =============================== VARIABLES =================================== #


NAME		= philo
INCLUDE		= include
LIBFT		= libft
SRC_DIR		= src
CC			= cc
CFLAGS		= -Wall -Werror -Wextra -Isrc
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

SRC = $(addprefix $(SRC_DIR)/, $(addsuffix .c, $(SRC_FILES)))
OBJ = $(addprefix $(SRC_DIR)/, $(addsuffix .o, $(SRC_FILES)))


# ================================= BUILD ===================================== #

all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(BLUE)Compiling $(NAME)...$(NC)"
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
	@echo "$(GREEN)$(NAME) built successfully! 🚀$(NC)"

$(SRC_DIR)%.o: $(SRC_DIR)%.c
	@echo "$(CYAN)Compiling $<...$(NC)"
	$(CC) $(CFLAGS) -c $< -o $@


# ================================== CLEAN ==================================== #

clean:
			@echo "$(YELLOW)Cleaning object files...$(NC)"
			$(RM) -f $(OBJ)
			@echo "$(GREEN)Object files cleaned!🧹​$(NC)"

fclean:		clean
			@echo "$(YELLOW)Cleaning all files...$(NC)"
			$(RM) -f $(NAME)
			@echo "$(GREEN)All files cleaned! 🧹​$(NC)"

# ================================= REBUILD =================================== #

re:			fclean all
			@echo "$(GREEN)>>> Cleaned and rebuilt everything for PHILO ! 💯​ <<<$(DEF_COLOR)"

# ================================ PHONY ====================================== #

.PHONY:		all clean fclean re
