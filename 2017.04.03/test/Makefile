##
## Makefile for Lib_lst in /home/neodar/Epitech/soutien/2017.04.03
## 
## Made by Fantin Bibas
## Login   <fantin.bibas@epitech.eu@epitech.net>
## 
## Started on  Mon Apr  3 13:59:08 2017 Fantin Bibas
## Last update Mon Apr  3 14:12:16 2017 Fantin Bibas
##

CC	=	gcc

RM	=	rm -f

NAME	=	test

FLAGS	=	-L../ -llst

CPPFLAGS =	-c -I../include

SRCS	=	main.c

OBJDIR	=	objs

OBJS	=	$(SRCS:%.c=$(OBJDIR)/%.o)

$(OBJDIR)/%.o:	%.c
	mkdir -p $(@D)
	$(CC) $< -o $@ $(CPPFLAGS)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
