SRCS = srcs/main.cpp srcs/Ice.cpp srcs/Cure.cpp srcs/Character.cpp srcs/AMateria.cpp srcs/MateriaSource.cpp srcs/UnequipedMateria.cpp

OBJS = $(SRCS:.cpp=.o)

NAME = ex03

CC = c++

CPP_FLAGS = -g -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPP_FLAGS) $(OBJS) -o $(NAME)

$(OBJS): %.o: %.cpp	
	$(CC) $(CPP_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re