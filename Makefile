##
## Makefile for pushswap in /home/wyzlic_a
##
## Made by Dimitri Wyzlic
## Login   <wyzlic_a@epitech.net>
##
## Started on  Thu Apr 21 15:01:37 2016 Dimitri Wyzlic
## Last update Sun Apr 24 23:39:13 2016 Dimitri Wyzlic
##

NAME	= push_swap

SRC	= basic_sort.c \
	  main.c \
	  basic_swap_two.c \
	  manage_list.c \
	  manage_list_two.c \
	  my_putchar.c \
	  quicksort.c \
	  my_get_nbr.c \
	  check_error.c \
	  radix_swap.c \
	  radix.c

OBJ	= $(SRC:.c=.o)

CFLAGS += -Wall -Wextra
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
