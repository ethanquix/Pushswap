/*
** check_error.c for pushswap in /home/wyzlic_a
**
** Made by Dimitri Wyzlic
** Login   <wyzlic_a@epitech.net>
**
** Started on  Sat Apr 23 17:37:40 2016 Dimitri Wyzlic
** Last update Sun Apr 24 04:49:30 2016 Dimitri Wyzlic
*/

#include "my.h"

void	my_putchar_error(char c)
{
  if (c != 0)
    write(1, &c, 1);
}

int	my_putstr_error(char *c)
{
  int     i;

  i = 0;
  if (c != NULL)
    {
      while (c[i])
        {
          my_putchar_error(c[i]);
          i = i + 1;
        }
    }
  return (84);
}

int	error_msg(t_element *a, int is_letter, int nb)
{
  if (nb < 2)
    return (my_putstr_error("usage : ./push_swap [nb1] ... and use number\n"));
  if (is_letter == 1)
    return (my_putstr_error("usage : ./push_swap [nb1] ... and NO LETTER\n"));
  if (is_sort(a) != 0)
    return (my_putstr_error("List already sort\n"));
  return (0);
}
