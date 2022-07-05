NAME = libftprintf.a

FUNCTIONS = ft_print_c.c ft_print_s.c ft_print_d_i.c ft_print_u.c \
			ft_print_x_p.c ft_printf.c

OBJECTS = $(FUNCTIONS:.c=.o)

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJECTS)
		ar rc $(NAME) $(OBJECTS)

$(OBJECTS): $(FUNCTIONS)
		gcc $(CFLAGS) -c $(FUNCTIONS)

clean:
		@rm -f $(OBJECTS)

fclean: clean
		@rm -f $(OBJECTS) $(NAME)

re: fclean all

.PHONY: all clean fclean re
