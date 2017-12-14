##
## EPITECH PROJECT, 2017
## Makefile Principal
## File description:
## By Camilleri Nathan
##

CC		=	gcc

RM		=	rm -f

OBJS		=	$(addprefix $(SRCDIR), $(SRCS:.c=.o))

SRCDIR		=	src/

MAKE		=	make -C

CFLAGS		=	-W -Wall -Wextra  -Wno-unused-parameter
CFLAGS		+=	-I./include/
CFLAGS		+=	-I./library/libprintf/include
CFLAGS		+=	-I./library/libpool/include

LDFLAGS		=	-Llibrary/lib -lpool -lprintf

MAKEPRINTF	=	library/libprintf/

MAKEPOOL	=	library/libpool/

LIBPRINTF	=	libprintf.a

LIBPOOL		=	libpool.a

NAME		=	bsq

SRCS		=	main.c 			\
			open_and_read_files.c

DEBUG		=	no

ifeq ($(DEBUG),yes)
CFLAGS		+= -g
else
CFLAGS		+= -Werror
endif

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) $(MAKEPRINTF)
	$(MAKE) $(MAKEPOOL)
	$(CC) -o $(NAME) $(OBJS) $(LDFLAGS)

all:	$(NAME)

clean:
	$(RM) $(OBJS)
	$(MAKE) $(MAKEPRINTF) clean
	$(MAKE) $(MAKEPOOL) clean

fclean:	clean
	$(RM) $(NAME)
	$(MAKE) $(MAKEPRINTF) fclean
	$(MAKE) $(MAKEPOOL) fclean
	$(RM) $(LIBPRINTF) $(LIBPOOL)

re:	fclean all

.PHONY: all clean fclean re
