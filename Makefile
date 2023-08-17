NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f
AR = ar rc

SRCS = ft_printf.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_putunbr.c ft_putpointer.c ft_putxnbr.c

OBJS = $(SRCS:.c=.o)

INCS = ft_printf.h

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

.c.o:
	$(CC) $(CFLAGS) -I $(INCS) -c $^

all: $(NAME)

clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re