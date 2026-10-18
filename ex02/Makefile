# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adeestev <adeestev@student.42urduliz.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/17 14:51:11 by adeestev          #+#    #+#              #
#    Updated: 2026/10/17 15:10:02 by adeestev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = mutant

CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "$(NAME) has been successfully compiled"

%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	@$(RM) $(OBJS)
	@echo "object files have been deleted"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(NAME) has been deleted"

re: fclean all

.PHONY: all clean fclean re
