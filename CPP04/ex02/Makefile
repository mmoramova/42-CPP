# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/01 17:03:43 by mmoramov          #+#    #+#              #
#    Updated: 2024/02/04 16:52:37 by mmoramov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = animal
CC = c++
C_FLAGS = -Wall -Wextra -Werror -Wshadow -MMD -std=c++98 -pedantic
RM = rm -f

#------------------------------SOURCES-----------------------------------------#
SRC = main.cpp AAnimal.cpp Dog.cpp Cat.cpp Brain.cpp

F_OBJ = obj/
OBJ = $(addprefix $(F_OBJ), $(SRC:.cpp=.o))
DEP = $(addprefix $(F_OBJ), $(SRC:.cpp=.d))

#------------------------------COLORS-----------------------------------------#
BLACK = \033[0;39m
BLUE = \033[0;94m
GREEN = \033[0;92m
MAGENTA = \033[0;95m

#------------------------------EXECUTION-----------------------------------------#
all: dir $(NAME)

-include ${DEP}

dir:
	@mkdir -p $(F_OBJ)

$(F_OBJ)%.o: %.cpp Makefile
	$(CC) $(C_FLAGS) -I ./inc -c $< -o $@

$(NAME):: $(OBJ)
	$(CC) $(C_FLAGS) $(^) -o $(NAME)
	@echo "$(GREEN)Everything has been compilated.$(BLACK)"

$(NAME)::
	@echo "$(GREEN)No actions needed.$(BLACK)"

.PHONY: all clean fclean re

clean:
	$(RM) $(OBJ) $(DEP)
	$(RM) -R obj

fclean: clean
	$(RM) $(NAME)
	@echo "$(MAGENTA)Everything has been cleaned.$(BLACK)"

re: fclean all
