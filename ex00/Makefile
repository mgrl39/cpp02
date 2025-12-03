# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/07 23:36:47 by meghribe          #+#    #+#              #
#    Updated: 2025/12/03 16:24:29 by meghribe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := fixed
SRCS := Fixed.cpp main.cpp
OBJS := $(SRCS:%=%.o)
INCS := Fixed.hpp
CPPFLAGS := -std=c++98 -g -fsanitize=address -Wall -Wextra -Werror
CPP := c++

.PHONY: all
all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) $(OBJS) -o $@

%.cpp.o: %.cpp $(INCS) Makefile
	$(CPP) $(CPPFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -rf $(OBJS)

.PHONY: fclean
fclean: clean
	rm -rf $(NAME)

.PHONY: re
re: fclean all
