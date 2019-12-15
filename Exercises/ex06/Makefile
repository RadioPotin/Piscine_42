NAME=do-op
CC=gcc
CFLAGS=-Wall -Werror -Wextra -o
SRCS=srcs/ft_do_op.c\
	 srcs/main.c\
	 srcs/check_nbr.c\
	 srcs/ft_atoi.c\
	 srcs/ft_strlen.c\
	 srcs/ft_putnbr.c\
	 srcs/ft_putchar.c\
	 srcs/err_out.c\
	 srcs/ft_add.c\
	 srcs/ft_sub.c\
	 srcs/ft_mul.c\
	 srcs/ft_div.c\
	 srcs/ft_mod.c

$(NAME):
	@$(CC) $(CFLAGS) $(NAME) $(SRCS)

all:$(NAME)
	@$(CC) $(CFLAGS) $(NAME) $(SRCS)

clean:
	@rm -rf $(NAME)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean
