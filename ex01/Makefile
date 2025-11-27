# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/27 19:54:07 by meghribe          #+#    #+#              #
#    Updated: 2025/11/27 20:01:01 by meghribe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := fixed
SRCS := Fixed.cpp main.cpp
OBJS := $(SRCS:%=%.o)
DEPS := $(OBJS:.o=.d)
INCS := Fixed.hpp
CPPFLAGS := -MMD -MP -std=c++98 -g -fsanitize=address
CPP := c++

.PHONY: all
all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) $(OBJS) -o $@

%.cpp.o: %.cpp $(INCS) Makefile
	$(CPP) $(CPPFLAGS) -c $< -o $@

.PHONY:
clean:
	rm -rf $(OBJS)
	rm -rf $(DEPS)

.PHONY: fclean
fclean: clean
	rm -rf $(NAME)

.PHONY: re
re: fclean all

-include $(DEPS)
