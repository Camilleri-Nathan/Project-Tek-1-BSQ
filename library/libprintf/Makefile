##
## EPITECH PROJECT, 2017
## Makefile Libprintf
## File description:
## By Camilleri Nathan
##

CC	=	gcc

RM	=	rm -f

OBJS	=	$(addprefix $(SRCDIR), $(SRCS:.c=.o))

SRCDIR	=	src/

COMPLIB =	ar rc

CFLAGS	=	-Wall -Wextra -W -Werror -Wno-unused-parameter

NAME	=	../lib/libprintf.a

SRCS	=	my_putchar.c					\
		my_putchar_process.c				\
		my_put_nbr_unsigned.c				\
		my_put_nbr_unsigned_process.c			\
		my_put_nbr.c					\
		my_put_nbr_process.c				\
		my_put_nbr_hexa_maj_unsigned.c			\
		my_put_nbr_hexa_maj_unsigned_process.c		\
		my_put_nbr_hexa_min_unsigned.c			\
		my_put_nbr_hexa_min_unsigned_process.c		\
		my_put_nbr_octal_unsigned.c			\
		my_put_nbr_octal_unsigned_process.c		\
		my_put_nbr_bin_unsigned.c			\
		my_put_nbr_bin_unsigned_process.c		\
		my_putstr_thing.c				\
		my_putstr_thing_process.c			\
		my_strlen.c					\
		my_putstr.c					\
		my_putstr_process.c				\
		value_pointer_hexa.c				\
		value_pointer_hexa_process.c			\
		my_put_nbr_hexa_min_unsigned_long_process.c	\
		my_printf.c

all: $(NAME)

$(NAME): $(OBJS)
	$(COMPLIB) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
