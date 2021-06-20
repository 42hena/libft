SRCS = ft_memset.c\
		ft_bzero.c\
		ft_memcpy.c\
			ft_memccpy.c\
			ft_memmove.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_strlen.c\
			ft_strlcpy.c\
			ft_strlcat.c\
			ft_strchr.c\
			ft_strrchr.c\
			ft_strnstr.c\
			ft_strncmp.c\
			ft_atoi.c\
			ft_isalpha.c\
			ft_isdigit.c\
			ft_isalnum.c\
			ft_isascii.c\
			ft_isprint.c\
			ft_toupper.c\
			ft_tolower.c


OBJS		=	$(SRCS:.c=.o)

NAME		=	libft.a
RM		=	rm -f
LIB		=	ar rcu
CC		=	gcc
CFLAGS		=	-Wall -Wextra -Werror

ifdef WITH_BONUS
	OBJ_SWITCH = $(OBJS_BONUS) 
else
	OBJ_SWITCH = $(OBJS)
endif

$(NAME)		:	$(OBJ_SWITCH)
			$(LIB) $@ $^

all		:	bonus $(NAME)

clean		:
			$(RM) $(OBJS)

fclean		:	clean
			$(RM) $(NAME)

re		:	fclean all

bonus		:
			$(MAKE) WITH_BONUS=1 $(NAME)

.PHONY		:	all clean fclean re bonus
