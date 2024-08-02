NAME = AmazingPhoneBook
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98 -g -fsanitize=address
RM = rm -rf
SRC = Contact.cpp PhoneBook.cpp
HEADER = Contact.hpp PhoneBook.hpp
OBJ = ${SRC:.cpp=.o}

all: $(NAME)

%.o: %.cpp $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@echo "Executable ready!"


clean:
	$(RM) $(OBJ)
	@echo "Objects successfully removed"

fclean: clean
	$(RM) $(NAME)
	@echo "Executable successfully removed"

re: fclean all

.PHONY: make all clean fclean re