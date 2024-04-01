NAME = iter
SRC  = main.cpp
OBJ = $(SRC:.cpp=.o)
CC =  c++
HEADER = iter.hpp
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