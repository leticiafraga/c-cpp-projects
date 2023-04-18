
NAME = boggle
SRC = ./$(NAME).cpp
OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all