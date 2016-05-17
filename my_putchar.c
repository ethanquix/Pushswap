/*
** my_putchar.c for my_pushswap in /home/wyzlic_a/blih/c_elem/CPE_2015_Pushswap
**
** Made by Dimitri Wyzlic
** Login   <wyzlic_a@epitech.net>
**
** Started on  Mon Apr 18 15:25:49 2016 Dimitri Wyzlic
** Last update Tue May 17 22:17:17 2016 Dimitri Wyzlic
*/

#include "my.h"

void	my_putchar(char c)
{
  if (c != 0)
    (void) write(1, &c, 1);
}

void	my_putstr(char *c)
{
  int	i;

  i = 0;
  if (c)
    {
      while (c[i])
	{
	  my_putchar(c[i]);
	  i = i + 1;
	}
    }
}

void	my_put_nbr(int i)
{
  if (i < 0)
    {
      my_putchar('-');
      i = -i;
    }
  if (i > 9)
    {
      my_put_nbr(i / 10);
      my_put_nbr(i % 10);
    }
  else
    my_putchar(i + 48);
}
