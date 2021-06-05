NAME = Pony

CC = g++

FLAGS = -Wall -Werror -Wextra

SRC = main.cpp Pony.cpp Pony.hpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC)
	mv a.out ${NAME}
clean:
	rm -rf $(NAME)

fclean : clean

re: clean all

.PHONY: all clean fclean re