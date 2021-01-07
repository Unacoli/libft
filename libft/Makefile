# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nargouse <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/07 14:54:05 by nargouse          #+#    #+#              #
#    Updated: 2021/01/07 16:48:38 by nargouse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
INCLUDES = ./
CFLAGS	+= -Wall -Werror -Wextra
SRC		=
OBJ		= $(SRC:.c=.o)
RM		= rm -f

all:	$(NAME)

$(NAME):
	@gcc -g $(CFLAGS) -I $(INCLUDES) -c $(SRC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
		${RM} ${OBJ}

fclean:	clean
		${RM} ${NAME}

re:	fclean all

.PHONY:	all clean fclean re
