# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/13 12:15:53 by alsaeed           #+#    #+#              #
#    Updated: 2024/04/16 08:14:13 by alsaeed          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX 		= g++
CXXFLAGS 	= -Wall -Werror -Wextra -std=c++98

# colors #
GREEN 		= \033[32m
RED 		= \033[31m
BOLD_GREEN 	= \033[1;32m
BOLD_RED 	= \033[1;31m
RESET 		= \033[0m

SRCS 		= Weapon.cpp HumanA.cpp HumanB.cpp

OBJS_DIR 	= objs
OBJS 		= $(SRCS:%.cpp=$(OBJS_DIR)/%.o)

NAME 		= unnecessary_violence

all: $(NAME)

$(OBJS_DIR)/%.o: %.cpp
	@mkdir -p $(OBJS_DIR)
	@$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJS) main.cpp
	@$(CXX) $(CXXFLAGS) $(OBJS) main.cpp -o $(NAME)
	@echo "unnecessary_violence compiled: $(BOLD_GREEN)OK$(RESET)"

clean:
	@if [ -e $(OBJS_DIR) ]; then \
		rm -rf $(OBJS_DIR); \
		echo "unnecessary_violence clean: $(BOLD_RED)OK$(RESET)"; \
	fi

fclean: clean
	@if [ -e $(NAME) ]; then \
		rm -rf $(NAME); \
		echo "unnecessary_violence full-clean: $(BOLD_RED)OK$(RESET)"; \
	fi

re: fclean all

.PHONY: all clean fclean re 