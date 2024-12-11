# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/31 21:28:09 by alsaeed           #+#    #+#              #
#    Updated: 2024/04/30 14:24:26 by alsaeed          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = megaphone

SOURCES = megaphone.cpp

# colors #
GREEN = \033[32m
RED = \033[31m
BOLD_GREEN = \033[1;32m
BOLD_RED = \033[1;31m
RESET = \033[0m

all: $(NAME)

$(NAME): $(SOURCES)
	@$(CXX) $(CXXFLAGS) -o $(NAME) $(SOURCES)
	@echo "megaphone compiled: $(BOLD_GREEN)OK$(RESET)"

clean:
	@if [ -e $(NAME) ]; then \
		rm -f $(NAME); \
		echo "megaphone full-clean: $(BOLD_RED)OK$(RESET)"; \
	fi

fclean: clean

re: fclean all

.PHONY: all clean fclean re