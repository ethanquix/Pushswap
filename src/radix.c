/*
** radix.c for pushswap in /home/wyzlic_a
**
** Made by Dimitri Wyzlic
** Login   <wyzlic_a@epitech.net>
**
** Started on  Sat Apr 23 18:26:22 2016 Dimitri Wyzlic
** Last update Sun Apr 24 04:46:34 2016 Dimitri Wyzlic
*/

#include "my.h"

static void	radix_first_loop(t_element **a, t_element **b, int i, int *len_x)
{
  int		j;

  j = 0;
  while (j < len_x[0])
    {
      if (((*a)->val >> i & 1) == 0)
        {
          pa(b, a, "pb ");
          len_x[0] = len_x[0] - 1;
          len_x[1] = len_x[1] + 1;
        }
      else
        {
           *a = ra(*a, "ra ");
          j = j + 1;
        }
    }
}

static void	radix_second_loop(t_element **a, t_element **b, int i, int *len_x)
{
  int		j;

  j = 0;
  while (j < len_x[1])
    {
      if (((*b)->val >> i & 1) == 1)
        {
          pa(a, b, "pa ");
          len_x[1] = len_x[1] - 1;
          len_x[0] = len_x[0] + 1;
        }
      else
        {
          *b = ra(*b, "rb ");
          j = j + 1;
        }
    }
}

static void    radix_third_loop(t_element **a, t_element **b, int *len_x)
{
  while (0 < len_x[1])
    {
      pa(a, b, "pa ");
      len_x[1] = len_x[1] - 1;
      len_x[0] = len_x[0] + 1;
    }
}

void            radix(t_element **a, t_element **b, int nbneg)
{
  int           i;
  int           *len_x;

  len_x = malloc(sizeof(int) * 2);
  if (len_x == NULL)
    return;
  len_x[0] = len_elem(*a);
  len_x[1] = 0;
  i = 0;
  while (i < 31)
    {
      radix_first_loop(a, b, i, len_x);
      radix_second_loop(a, b, i, len_x);
      i = i + 1;
    }
  radix_third_loop(a, b, len_x);
  i = 0;
  while (i < nbneg)
    {
      *a = rra(*a, "rra ");
      i = i + 1;
    }
  return;
}
