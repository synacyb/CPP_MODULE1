NAME    = phonebook
CPP     = c++
FLAGS   = -std=c++98 -Wall -Wextra -Werror
RM      = rm -rf


SRC  = main.cpp \
	   contact.cpp \
	   phonebook.cpp 
OBJ     = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(FLAGS) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all