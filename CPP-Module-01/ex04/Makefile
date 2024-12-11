# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/15 18:03:33 by alsaeed           #+#    #+#              #
#    Updated: 2024/04/18 07:01:26 by alsaeed          ###   ########.fr        #
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

SRCS 		= FileReplacer.cpp

OBJS_DIR 	= objs
OBJS 		= $(SRCS:%.cpp=$(OBJS_DIR)/%.o)

NAME 		= FileReplacer

all: $(NAME)

$(OBJS_DIR)/%.o: %.cpp
	@mkdir -p $(OBJS_DIR)
	@$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJS) main.cpp
	@$(CXX) $(CXXFLAGS) $(OBJS) main.cpp -o $(NAME)
	@echo "FileReplacer compiled: $(BOLD_GREEN)OK$(RESET)"

clean:
	@if [ -e $(OBJS_DIR) ]; then \
		rm -rf $(OBJS_DIR); \
		echo "FileReplacer clean: $(BOLD_RED)OK$(RESET)"; \
	fi

fclean: clean
	@if [ -e $(NAME) ]; then \
		rm -rf $(NAME); \
		echo "FileReplacer full-clean: $(BOLD_RED)OK$(RESET)"; \
	fi

re: fclean all

.PHONY: all clean fclean re 