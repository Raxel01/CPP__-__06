# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abait-ta <abait-ta@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/15 18:34:20 by abait-ta          #+#    #+#              #
#    Updated: 2024/01/20 15:57:34 by abait-ta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ScalarConverter.cpp typeRecognizer.cpp main.cpp

CXX = c++

HEADER = ScalarConverter.hpp typeRecognizer.hpp

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

NAME = ScalarConverter

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