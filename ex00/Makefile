SRCS = megaphone.cpp
OBJS = ${SRCS:.cpp=.o}
NAME = megaphon

CC = c++
CPPFLAGS = -Wall -Wextra -Werror

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
