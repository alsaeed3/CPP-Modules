# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/13 11:59:46 by alsaeed           #+#    #+#              #
#    Updated: 2024/04/15 18:01:12 by alsaeed          ###   ########.fr        #
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

NAME 		= str_ptr_ref

all: $(NAME)

$(NAME): main.cpp
	@$(CXX) $(CXXFLAGS) main.cpp -o $(NAME)
	@echo "str_ptr_ref compiled: $(BOLD_GREEN)OK$(RESET)"

clean:
	@if [ -e $(NAME) ]; then \
		rm -rf $(NAME); \
		echo "str_ptr_ref full-clean: $(BOLD_RED)OK$(RESET)"; \
	fi

fclean: clean

re: fclean all

.PHONY: all clean fclean re 