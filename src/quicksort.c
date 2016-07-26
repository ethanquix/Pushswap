/*
** quicksort.c for pushswap in /home/wyzlic_a
**
** Made by Dimitri Wyzlic
** Login   <wyzlic_a@epitech.net>
**
** Started on  Fri Apr 22 21:41:21 2016 Dimitri Wyzlic
** Last update Sun Apr 24 04:51:28 2016 Dimitri Wyzlic
*/

#include "my.h"

void	quick_smtob(t_element **a, int top_half_len)
{
  int	temp;

  temp = 0;
  while (temp < top_half_len)
    {
      *a = rra(*a, "rra ");
      temp = temp + 1;
    }
}

void	quick_smtof(t_element **a, int top_half_len)
{
  int   temp;

  temp = 0;
  while (temp < top_half_len)
    {
      *a = ra(*a, "ra ");
      temp = temp + 1;
    }
}

void	quick_high_to_a(t_element **a, t_element **b, int top_half_len)
{
  int	temp;

  temp = 0;
  while (temp < top_half_len)
    {
      pa(a, b, "pa ");
      temp = temp + 1;
    }
}

void	quick_to_init_a(int top_half_len, t_element **a)
{
  int	temp;

  temp = 0;
  while (temp < top_half_len)
    {
      *a = rra(*a, "rra ");
      temp = temp + 1;
    }
}

int		quick_high_to_b(t_element **a, t_element **b, int n)
{
  int		i;
  int		top_half_len;
  long double	median;
  long double	a_val;

  median = calc_median(*a, n);
  top_half_len = 0;
  i = 0;
  while (i < n)
    {
      a_val = (long double) (*a)->val;
      if (*a != NULL && a_val <= median)
        {
          pa(b, a, "pb ");
          top_half_len = top_half_len + 1;
        }
      else
        *a = ra(*a, "ra ");
      i = i + 1;
    }
  return (top_half_len);
}
