NAME = main

CC = g++

FLAGS = -Wall -Werror -Wextra

SRC = main.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean : clean

re: clean all

.PHONY: all clean fclean re