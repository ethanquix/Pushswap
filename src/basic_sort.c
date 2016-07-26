/*
** basic_sort.c for pushswap in /home/wyzlic_a/blih/c_elem/CPE_2015_Pushswap
**
** Made by Dimitri Wyzlic
** Login   <wyzlic_a@epitech.net>
**
** Started on  Mon Apr 18 19:42:26 2016 Dimitri Wyzlic
** Last update	Fri Apr 22 22:15:13 2016 Full Name
*/

#include "my.h"

int		is_sort(t_element *a)
{
  t_element	*temp;
  t_element	*final;

  final = a;
  temp = a;
  if (len_elem(a) <= 1)
    return (1);
  while ((temp->next)->next != final)
    {
      if (temp->val > (temp->next)->val)
	return (0);
      temp = temp->next;
    }
  if (temp->val > (temp->next)->val)
    return (0);
  return (1);
}

long double	calc_median(t_element *a, int n)
{
  t_element	*temp;
  long double	median;
  int		i;
  long double	n_long;

  i = 0;
  temp = a;
  median = 0;
  n_long = (long double) n;
  while (i < n)
    {
      median = median + temp->val;
      temp = temp->next;
      i = i + 1;
    }
  return ((median == 0 || n == 0) ? 0 : ((median / n_long)));
}
