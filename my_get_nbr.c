/*
** my_getnbr.c for lib in /home/wyzlic_a/blih/Piscine_C_LIB/c_files
**
** Made by Dimitri Wyzlic
** Login   <wyzlic_a@epitech.net>
**
** Started on  Mon Mar 14 11:06:23 2016 Dimitri Wyzlic
** Last update Sun Apr 24 04:48:24 2016 Dimitri Wyzlic
*/

#include "my.h"

static int	my_strlen(char *c, int *is_letter)
{
  int		i;

  i = 0;
  if (c == NULL)
    return (0);
  while (c[i])
    {
      if (c[i] < '0' || c[i] > '9')
        if (c[i] != '-')
          *is_letter = 1;
      i = i + 1;
    }
  return (i);
}

int	my_getnbr(char *str, int *nbneg, int *is_letter)
{
  int	i;
  int	out;
  int	pow;

  pow = 1;
  out = 0;
  i = my_strlen(str, is_letter) - 1;
  while (i >= 0)
    {
      if (str[i] == '-')
        {
          out = -out;
          *nbneg = *nbneg + 1;
        }
      else
        {
          out = out + ((str[i] - '0') * pow);
          pow = pow * 10;
        }
      i = i - 1;
    }
  return (out);
}
