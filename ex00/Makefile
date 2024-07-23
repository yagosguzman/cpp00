NAME = megaphone
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf
SRC = megaphone.cpp
OBJ = ${SRC:.cpp=.o}

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)
	@echo "Executable ready!"

clean:
	@$(RM) $(OBJ)
	@echo "Objects successfully removed"

fclean: clean
	@$(RM) $(NAME)
	@echo "Executable successfully removed"

re: fclean all

.PHONY: make all clean fclean re