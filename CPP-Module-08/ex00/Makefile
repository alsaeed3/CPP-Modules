# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/05 18:02:37 by alsaeed           #+#    #+#              #
#    Updated: 2024/08/21 19:32:39 by alsaeed          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GREEN 		= \033[32m
RED 		= \033[31m
BOLD_GREEN 	= \033[1;32m
BOLD_RED 	= \033[1;31m
RESET 		= \033[0m

NAME = easyfind

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

INCLUDES = -I./

all: $(NAME)

$(NAME): main.cpp
	@$(CXX) $(CXXFLAGS) $(INCLUDES) main.cpp -o $@
	@echo "easyfind compiled: $(BOLD_GREEN)OK$(RESET)"

clean:
	@if [ -e $(NAME) ]; then \
		echo "easyfind clean: $(BOLD_RED)OK$(RESET)"; \
	fi

fclean: clean
	@if [ -e $(NAME).dSYM ]; then \
		rm -rf $(NAME).dSYM; \
	fi
	@if [ -e $(NAME) ]; then \
		rm -rf $(NAME); \
		echo "easyfind full-clean: $(BOLD_RED)OK$(RESET)"; \
	fi

re: fclean all

.PHONY: all clean fclean re
