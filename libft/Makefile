SRCS = *.c

BONUS = *_bonus.{c/h}

OBJS = ${SRCS:.c=.o}

NAME = libft.a

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -I includes/ -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
	ar rc ${NAME} ${OBJS}
	ranlib ${NAME}

all:	${NAME}

clean:
		${RM} ${OBJS}

make:

make bonus:

fclean:	clean
		${RM} ${NAME}

re:	fclean all

.PHONY:	all clean fclean re make
