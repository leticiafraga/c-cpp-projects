
NAME = main
SRC = ./$(NAME).cpp \
	./wrap.cpp
OBJ = $(SRC:.cpp=.o)

main:
	g++ -o main main.cpp wrap.cpp object.cpp toy.cpp littlePony.cpp

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all