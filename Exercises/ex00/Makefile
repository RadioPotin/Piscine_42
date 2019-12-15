NAME=libft.a
CC=gcc
AR=ar rc
RANLIB=ranlib
CFLAG=-c
SRCS=srcs/ft_putchar.c\
	 srcs/ft_putstr.c\
	 srcs/ft_strcmp.c\
	 srcs/ft_strlen.c\
	 srcs/ft_swap.c
OBJ= ft_putchar.o\
	 ft_putstr.o\
	 ft_strcmp.o\
	 ft_strlen.o\
	 ft_swap.o
LIB= -I includes/ft.h

$(NAME):
	@$(CC) $(CFLAG) $(SRCS)
	@$(AR) $(NAME) $(OBJ)
	@$(RANLIB) $(NAME)

all:$(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME) $(OBJ)

re: fclean all

.PHONY: clean fclean
