##
## Makefile for  in /home/yannick.suc/CPool_Day10
## 
## Made by suc yannick
## Login   <yannick.suc@epitech.net>
## 
## Started on  Fri Oct 14 08:28:09 2016 suc yannick
## Last update Mon Apr  3 14:34:05 2017 suc yannick
##

SRC	=	src/lstInsert.c	\
		src/lstRemove.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

CPPFLAGS =	-I./include

all:	$(NAME)


$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ) *~;

fclean: clean
	rm -f $(NAME);

re: fclean all
