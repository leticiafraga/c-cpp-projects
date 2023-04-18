
NAME = main
SRC := $(wildcard *.cpp)
OBJ := $(patsubst %.cpp,%.o,$(SRC))

all: $(NAME)

$(NAME): $(OBJ)
	g++ -o $@ $^

%.o: %.cpp
	g++ -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

