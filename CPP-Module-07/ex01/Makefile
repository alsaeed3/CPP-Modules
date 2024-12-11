# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/25 16:58:20 by alsaeed           #+#    #+#              #
#    Updated: 2024/07/31 21:01:15 by alsaeed          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GREEN 		= \033[32m
RED 		= \033[31m
BOLD_GREEN 	= \033[1;32m
BOLD_RED 	= \033[1;31m
RESET 		= \033[0m

NAME = iter

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

INCLUDES = -I./

all: $(NAME)

$(NAME): main.cpp
	@$(CXX) $(CXXFLAGS) $(INCLUDES) main.cpp -o $@
	@echo "iter compiled: $(BOLD_GREEN)OK$(RESET)"

clean:
	@if [ -e $(NAME) ]; then \
		echo "iter clean: $(BOLD_RED)OK$(RESET)"; \
	fi

fclean: clean
	@if [ -e $(NAME) ]; then \
		rm -rf $(NAME); \
		echo "iter full-clean: $(BOLD_RED)OK$(RESET)"; \
	fi

re: fclean all

.PHONY: all clean fclean re