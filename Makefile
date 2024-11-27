NAME	= libftprintf.a
SRCS	= ft_put_char_str.c\
		  ft_put_addr.c\
		  ft_printf.c\
		  ft_putnbr.c\

OBJS	= ${SRCS:%.c=%.o}

FLAGS	= -Wall -Wextra -Werror

$(NAME):
	gcc $(FLAGS) -c $(SRCS) -I ./
	ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all