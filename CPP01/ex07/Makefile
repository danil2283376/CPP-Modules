NAME = replace

SRC = replace.cpp

CC = g++

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME) : $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean all