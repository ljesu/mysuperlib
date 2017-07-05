NAME = test_lib
CC = gcc 
SRC = src/mystrlen.c src/myputchar.c src/myputstr.c src/mystrnew.c tests/main.c
all: 
	$(CC) $(SRC) -o $(NAME)
test: all
	./$(NAME)
