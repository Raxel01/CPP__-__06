# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abait-ta <abait-ta@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/15 18:34:20 by abait-ta          #+#    #+#              #
#    Updated: 2024/01/23 11:40:36 by abait-ta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Serializer.cpp  main.cpp Data.cpp

CXX = c++

HEADER = Serializer.hpp Data.hpp

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

NAME = Serializer

OBJ = ${SRC:.cpp=.o}

all : $(NAME)

$(NAME) : ${OBJ} $(HEADER)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJ)

%.o : %.cpp $(HEADER)
	$(CXX)  $(CXXFLAGS) -c $< -o  $@

clean :
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re : fclean all

.PHONY: clean fclean all re NAME