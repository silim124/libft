NAME = libft.a

SRC = ft_strnstr.c ft_isdigit.c ft_strlcpy.c ft_strlen.c \
		ft_memcmp.c ft_strchr.c ft_bzero.c ft_strjoin.c \
		ft_isascii.c ft_memcpy.c ft_memccpy.c ft_isprint.c \
		ft_toupper.c ft_strrchr.c ft_isalpha.c ft_memchr.c \
		ft_memset.c ft_strncmp.c ft_memmove.c ft_strlcat.c\
		ft_calloc.c ft_strdup.c ft_atoi.c ft_isalnum.c\
		ft_tolower.c ft_substr.c ft_strjoin.c ft_strtrim.c\
		ft_split.c ft_itoa.c ft_strmapi.c

OBJ = ${SRC:.c=.o}

CC = gcc

CFLAG = -Wall -Wextra -Werror

RM = rm -rf

.c.o:
		${CC} ${CFLAG} -g -c $< -o ${<:.c=.o}

$(NAME): ${OBJ}
		ar rcs ${NAME} ${OBJ}

all:	${NAME}

clean:
		${RM} ${OBJ}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

.PHONY: all clean fclean re
