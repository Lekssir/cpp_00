SRCS = main.cpp my_phone_book.cpp
OBJS = ${SRCS:.cpp=.o}
NAME = crappy_phone_book

CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

RM = rm -f

%.o: %.cpp
	${CC} ${CPPFLAGS} ${INCLUDES} -c $< -o ${<:.cpp=.o}

${NAME}: 	${OBJS}
			${CC} ${CPPFLAGS} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY: all clean fclean re bonus
