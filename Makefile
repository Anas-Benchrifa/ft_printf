CC = cc
CFLAGS = -Wextra -Wall -Werror
NAME = ft_printf.a

SRC =	ft_put_char_str.c\
		ft_put_hex.c\
		ft_put_nbr.c\
		ft_printf.c\

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	ar rsc $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re