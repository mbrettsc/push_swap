NAME = libft.a
FLAG = -Wall -Wextra -Werror
SRC = ft_atoi.c ft_isdigit.c ft_lstnew.c \
	ft_lstadd_front.c \
	ft_lstsize.c\
	ft_lstlast.c \
	ft_lstadd_back.c \
	ft_split.c \

all: $(NAME)

$(NAME):
	gcc $(FLAG) -c $(SRC)
	ar rc $(NAME) *.o
clean:
	rm -f  *.o
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re