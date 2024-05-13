CFLAGS		=	-Wall -Wextra -Werror
CC			=	cc

NAME		=	pipex
SRC			=	mandatory/pipex_mandatory.c mandatory/utils_mandatory.c mandatory/child_mandatory.c
OBJS		=	${SRC:_mandatory.c=_mandatory.o}

NAME_BONUS	=	pipex_bonus
SRC_BONUS	=	bonus/pipex_bonus.c bonus/utils_bonus.c bonus/child_bonus.c bonus/here_doc_bonus.c
OBJS_BONUS	=	${SRC_BONUS:_bonus.c=_bonus.o}

all:  libft.a $(NAME)

bonus: libft.a $(NAME_BONUS)

$(NAME): $(OBJS) libft/libft.a
	$(CC) $(CFLAGS) -o $(NAME) $^

$(NAME_BONUS): $(OBJS_BONUS) libft/libft.a
	$(CC) $(CFLAGS) -o $(NAME_BONUS) $^ libft/libft.a

%_mandatory.o: %_mandatory.c pipex_mandatory.h
	$(CC) $(CFLAGS) -c $< -o $@

%_bonus.o: %_bonus.c pipex_bonus.h
	$(CC) $(CFLAGS) -c $< -o $@

libft.a:
	@cd libft && make

clean:
	rm -f $(OBJS) $(OBJS_BONUS)
	@cd libft && make clean

fclean: clean
	rm -f $(NAME) $(NAME_BONUS)
	@cd libft && make fclean

re: fclean all
