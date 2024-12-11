# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/22 17:20:07 by alsaeed           #+#    #+#              #
#    Updated: 2024/04/24 00:28:03 by alsaeed          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX 		= c++
CXXFLAGS 	= -Wall -Werror -Wextra -std=c++98

SRCS 		= ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

OBJS_DIR 	= objs
OBJS 		= $(SRCS:%.cpp=$(OBJS_DIR)/%.o)

NAME 		= fragtrap

# colors #
GREEN 		= \033[32m
RED 		= \033[31m
BOLD_GREEN 	= \033[1;32m
BOLD_RED 	= \033[1;31m
RESET 		= \033[0m

all: $(NAME)

$(OBJS_DIR)/%.o: %.cpp
	@mkdir -p $(OBJS_DIR)
	@$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJS) main.cpp
	@$(CXX) $(CXXFLAGS) $(OBJS) main.cpp -o $(NAME)
	@echo "FragTrap compiled: $(BOLD_GREEN)OK$(RESET)"

clean:
	@if [ -e $(OBJS_DIR) ]; then \
		rm -rf $(OBJS_DIR); \
		echo "FragTrap clean: $(BOLD_RED)OK$(RESET)"; \
	fi

fclean: clean
	@if [ -e $(NAME) ]; then \
		rm -rf $(NAME); \
		echo "FragTrap full-clean: $(BOLD_RED)OK$(RESET)"; \
	fi

re: fclean all

.PHONY: all clean fclean re 