SRCS = tests.cpp Account.cpp
OBJS = ${SRCS:.cpp=.o}

HEADERS = Account.hpp

NAME = tests

CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

RM = rm -f

%.o: %.cpp
	${CC} ${CPPFLAGS} -c $< -o ${<:.cpp=.o}

${NAME}: 	${OBJS} ${HEADERS}
			${CC} ${CPPFLAGS} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY: all clean fclean re bonus
