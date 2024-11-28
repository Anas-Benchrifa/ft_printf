CC = cc
RM = rm -rf
NAME = libftprintf.a
CFLAGS = -Wextra -Wall -Werror

SRC = 	ft_put_char_str.c\
		ft_put_addr.c\
		ft_printf.c\
		ft_putnbr.c\

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re