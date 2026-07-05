NAME    = Animal

CC      = c++
CFLAGS  = -Wall -Wextra -Werror -std=c++17

SRC     = main.cpp animal.cpp  cat.cpp  dog.cpp  wronganimal.cpp  wrongcat.cpp  wrongdog.cpp
OBJ     = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re