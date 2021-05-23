NAME = PhoneBook

CC = g++

FLAGS = -Wall -Werror -Wextra

SRC = main.cpp Contact.cpp Contact.hpp PhoneBook.cpp PhoneBook.hpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC)
	mv a.out ${NAME}
clean:
	rm -rf $(NAME)

fclean : clean

re: clean all

.PHONY: all clean fclean re