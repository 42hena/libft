Name =	libft.a
SRCS =	ft_memset.c	ft_bzero.c	ft_memcpy.c \
		ft_memccpy.c ft_memmove.c ft_memchr.c \
		ft_memcmp.c ft_strlen.c ft_strcpy.c \
	ft_strlcat.c ft_strchr.c ft_strrchr.c \
	ft_strnstr.c ft_strncmp.c ft_atoi.c \
	ft_isalpha.c ft_isdigit.c ft_isalnum.c \
	ft_isascii.c ft_isprint.c ft_toupper.c \
	ft_tolower.c ft_calloc.c ft_strdup.c \

CFLAGS = -Wall -Wextra -Werror
OBJS = $(SRCS:.c = .o)

all : $(NAME)

$(NAME) : $(OBJS)
	ar rc $@ $^

clean:
	rm -f $(NAME) $^

fclean: clean
	rm -f $(NAME)

re: fclean all

