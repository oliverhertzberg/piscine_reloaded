NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = srcs/ft_putchar.c\
       srcs/ft_putstr\
       srcs/ft_strcmp\
       srcs/ft_strlen\
       srcs/ft_swap
OBJS = $(SRCS:.c=o)
INCL = includes/ft.h

all : $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)
$(OBJS) : $(SRCS)
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INCL)
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re:
	fclean all
.PHONY: all fclean clean re

