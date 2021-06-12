NAME	=	libft.a
SRCS = = ft_memset \
		ft_bzero \
		ft_memcpy \
		ft_memccpy \
		ft_memmove \
		ft_memchr \
		ft_memcmp \
		ft_strlen \
		ft_strlcpy \
		ft_strlcat \
		ft_strchr \
		ft_strrchr \
		ft_strnstr \
		ft_strncmp \
		ft_atoi \
		ft_isalpha \
		ft_isdigit \
		ft_isalnum \
		ft_isascii \
		ft_isprint \
		ft_toupper \
		ft_tolower \
		ft_calloc \
		ft_strdup \
		ft_substr \
		ft_strjoin \
		ft_strtrim \
		ft_split \
		ft_itoa \
		ft_strmapi \
		ft_putchar_fd \
		ft_putstr_fd \
		ft_putendl_fd \
		ft_putnbr_fd \
		ft_strtok \
		ft_strcmp \

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
