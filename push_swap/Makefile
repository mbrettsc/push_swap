NAME = push_swap

CFILES = main/main.c rules/ft_push_op.c rules/ft_swap_op.c rules/ft_rot_op.c rules/ft_rev_rot_op.c \
		small_sorts/ft_push_small_a.c small_sorts/ft_sort_five.c small_sorts/ft_sort_three.c \
		small_sorts/ft_sort_four.c main/ft_checks.c main/ft_lst_fuctions.c main/push_swap.c 
	
OBJECTS = $(CFILES:.c=.o)

LIBFT = libft

LIBFTM = libft/libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror
 
all: $(NAME)

$(NAME): $(OBJECTS) $(LIBFT)
		make -C $(LIBFT)
		@(gcc $(CFLAGS) $(OBJECTS) $(LIBFTM) -o $(NAME))

clean: pic
		@rm -f $(OBJECTS)
		make clean -C $(LIBFT)
		@echo "Objects files deleted"

fclean: clean
		make fclean -C $(LIBFT)
		@rm -rf $(NAME)
		@echo "Archive file deleted"

re: fclean all

pic :
		@echo "\033[1;33m     .--..--..--..--..--..--.			"
		@echo "    .  \  ( ._   (_)     _   \				"
		@echo "  .     |   ._)         (_)  |				"
		@echo "  \ _. )\      .----..---.   /				"
		@echo "  |(_.'  |    /    .-\-.  \  |				"
		@echo "  \     0|    |   ( O| O) | o|				"
		@echo "   |  _  |  .--.____.'._.-.  |				"
		@echo "   \ (_) | o         -  .-   |				"
		@echo "   |    \   | -._ _ _ _ _\ /					"
		@echo "    \    |   |   . |_||_|   |				"
		@echo "    | o  |    \_      \     |     -.   .-.	"
		@echo "    |.-.  \      --..-'   O |    | . -  .'	"
		@echo "  _.'  .' |      -.-'      /-.__   . .-'		"
		@echo ".'  -.  '.|= =.= =.= =.= =|._/_  - .| 		"
		@echo "-._   .  |________/\_____|     -.|			"
		@echo "  .'   ).| '=' '='\/ '=' |					"
		@echo "   ._.    --------------- 					"
		@echo "          //___\   //___\					"
		@echo "            ||       ||						"	
		@echo "            ||_.-.   ||_.-.					"
		@echo "           (_.--__) (_.--__)\033[1;36mmbrettsc"