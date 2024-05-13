SRC		=	ft_putstr_fd.c ft_strncmp.c ft_strjoin.c ft_split.c ft_strnstr.c \
			ft_substr.c ft_strlen.c ft_memcpy.c ft_strchr.c ft_strdup.c \
			get_next_line.c get_next_line_utils.c
OBJS	=	${SRC:.c=.o}
CFLAGS	=	-Wall -Wextra -Werror
CC		=	cc
NAME	=	libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
