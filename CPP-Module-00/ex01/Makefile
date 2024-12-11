# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/02 09:46:46 by alsaeed           #+#    #+#              #
#    Updated: 2024/04/30 13:41:41 by alsaeed          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

	
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = phonebook

OBJ_DIR = ./obj/
SRCS = Contact.cpp Phonebook.cpp
OBJS = $(addprefix $(OBJ_DIR), $(SRCS:.cpp=.o))

# colors #
GREEN = \033[32m
RED = \033[31m
BOLD_GREEN = \033[1;32m
BOLD_RED = \033[1;31m
RESET = \033[0m

$(OBJ_DIR)%.o: %.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CXX) $(CXXFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS) main.cpp
	@$(CXX) $(CXXFLAGS) $(OBJS) main.cpp -o $(NAME)
	@echo "PhoneBook compiled: $(BOLD_GREEN)OK$(RESET)"

clean:
	@if [ -e $(OBJ_DIR) ]; then \
		rm -rf $(OBJ_DIR); \
		echo "PhoneBook clean: $(BOLD_RED)OK$(RESET)"; \
	fi

fclean: clean
	@if [ -e $(NAME) ]; then \
		rm -rf $(NAME); \
		echo "PhoneBook full-clean: $(BOLD_RED)OK$(RESET)"; \
	fi

re: fclean all

.PHONY: all clean fclean re

