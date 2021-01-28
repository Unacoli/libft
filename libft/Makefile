# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nargouse <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/07 14:54:05 by nargouse          #+#    #+#              #
#    Updated: 2021/01/28 16:03:16 by nargouse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
INCLUDES = ./libft.h
CFLAGS	+= -Wall -Werror -Wextra
SRC		= ft_isalpha.c ft_memcmp.c ft_strlcat.c ft_substr.c \
		  ft_atoi.c ft_isascii.c ft_memcpy.c ft_putnbr_fd.c \
		  ft_strlcpy.c ft_tolower.c ft_isdigit.c ft_memmove.c \
		  ft_strlen.c ft_toupper.c ft_bzero.c ft_isprint.c \
		  ft_memset.c ft_putstr_fd.c ft_strmapi.c ft_calloc.c ft_itoa.c \
		  ft_split.c ft_strncmp.c \
		  ft_putchar_fd.c ft_strchr.c ft_strnstr.c \
		  ft_memccpy.c ft_putendl_fd.c ft_strdup.c ft_strrchr.c ft_isalnum.c \
		  ft_memchr.c ft_strjoin.c ft_strtrim.c
SRCS	= ft_lstnew.c ft_lstadd_front.c ft_lstsize ft_lstlast ft_lstadd_back \
		  ft_lstdelone ft_lstclear ft_lstiter ft_lstmap \
		  ft_lstlast.c
OBJ		= $(SRC:.c=.o)
OBJS	= $(SRCS:.c=.o)
RM		= rm -f

all:	$(NAME)

$(NAME):
	@gcc -g $(CFLAGS) -I $(INCLUDES) -c $(SRC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

bonus:
	@gcc -g $(CFLAGS) -I $(INCLUDES) -c $(SRCS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

clean:
		${RM} ${OBJ} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:	fclean all

.PHONY:	all clean fclean re
