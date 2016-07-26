##
## Makefile for pushswap in /home/wyzlic_a
##
## Made by Dimitri Wyzlic
## Login   <wyzlic_a@epitech.net>
##
## Started on  Thu Apr 21 15:01:37 2016 Dimitri Wyzlic
## Last update Tue Jul 26 14:07:23 2016 Dimitri Wyzlic
##

NAME	= push_swap

SRC	= src/basic_sort.c \
	  src/main.c \
	  src/basic_swap_two.c \
	  src/manage_list.c \
	  src/manage_list_two.c \
	  src/my_putchar.c \
	  src/quicksort.c \
	  src/my_get_nbr.c \
	  src/check_error.c \
	  src/radix_swap.c \
	  src/radix.c

OBJ	= $(SRC:.c=.o)

CFLAGS += -Wall -Wextra -I inc -Wno-unused-result
CFLAGS += -O2
#CFLAGS += -g -g3 -ggdb

all	: 	$(NAME)

$(NAME)	: 	$(OBJ)
		cc $(OBJ) $(CFLAGS) -o $(NAME)

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)

re	:	fclean all

.PHONY :	all clean fclean re
