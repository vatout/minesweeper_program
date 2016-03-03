##
## Makefile for Makefile in /home/vatout_a/taff/USP/my_select
## 
## Made by Vatoutine Artem
## Login   <vatout_a@epitech.net>
## 
## Started on  Wed Dec  2 12:10:04 2015 Vatoutine Artem
## Last update Fri Dec 18 21:54:55 2015 Vatoutine
##

CC	=	gcc

SRCS	=	main.c \
		my_bsq.c \
		my_read.c \
		my_struct.c \
		my_buffer.c \
		my_check.c \
		my_compare.c \
		my_aff.c \
		my_free.c \
		my_special.c \
		my_annex.c

OBJS	=	$(SRCS:.c=.o)

LIB	=	-lmy -L./lib

NAME	=	bsq

RM	=	rm -f

CFLAGS	=	-Wall -Wextra -pedantic -ansi -std=c89

$(NAME):	$(OBJS)
	$(CC) $(OBJS) $(LIB) -o $(NAME)

all:	$(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
