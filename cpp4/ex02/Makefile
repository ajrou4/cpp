NAME = main
SRC  = Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
CC =  c++
HEADER = Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp
FLAGS = -Wall -Wextra -Werror -std=c++98
all:$(NAME)

%.o:%.cpp 
			$(CC) $(FLAGS) -c $< -o $@ 

$(NAME) :$(HEADER) $(OBJ)
				$(CC) $(FLAGS) $(OBJ)  -o $(NAME)
				@echo "Compiling done."

clean :
		@rm -rf $(OBJ)

fclean : clean
		@rm -f $(NAME) 

re : fclean all