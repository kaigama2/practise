NAME = get_next_line
SRC = .c
FLAG = -Wall -Werror -Wextra

$(NAME):
		gcc$(FLAG) $(SRC) -O $(NAME)
Clean:
		rm -rf $(NAME)
fclean: Clean
		rm -rf *.O
all: $(NAME)
make re: fclean all