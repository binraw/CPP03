NAME = ClapTrap


SRCS_FILE = ClapTrap.cpp main.cpp
HEADER_FILE = ClapTrap.hpp

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98




OBJS = $(SRCS_FILE:.cpp=.o)


RM = rm -Rf

all: ${NAME}

${NAME}: ${OBJS}
	$(CC) $(OBJS) -o $(NAME)



%.o: %.cpp  Makefile ${HEADER_FILE}
	$(CC) ${CFLAGS} -c $< -o $@

clean:
	$(RM) $(OBJS)


fclean: clean
	$(RM) $(NAME)

re: fclean all



.PHONY: all clean fclean re 