NAME = main
SRC  = AMateria.cpp Character.cpp Cure.cpp Ice.cpp  MateriaSource.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
CC =  c++
HEADER = AMateria.hpp Character.hpp Cure.hpp ICharacter.hpp IMateriaSource.hpp Ice.hpp MateriaSource.hpp
FLAGS = -Wall -Wextra -Werror -std=c++98 
all:$(NAME)

%.o:%.cpp 
			$(CC) $(FLAGS) -c $< -o $@ 

$(NAME) : $(HEADER) $(OBJ)
				$(CC) $(FLAGS) $(OBJ)  -o $(NAME)
				@echo "Compiling done."

clean :
		@rm -rf $(OBJ)

fclean : clean
		@rm -f $(NAME) 

re : fclean all