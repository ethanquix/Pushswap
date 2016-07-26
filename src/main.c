/*
** main.c for pushswap in /home/wyzlic_a/blih/c_elem/CPE_2015_Pushswap
**
** Made by Dimitri Wyzlic
** Login   <wyzlic_a@epitech.net>
**
** Started on  Mon Apr 18 15:35:07 2016 Dimitri Wyzlic
** Last update Sun Apr 24 04:44:55 2016 Dimitri Wyzlic
*/

#include "my.h"
#include <unistd.h>

void	quicksort(int n, t_element **a, t_element **b)
{
  int	top_half_len;

  if (n <= 1)
    return;
  top_half_len = quick_high_to_b(a, b, n);
  quick_to_init_a(n - top_half_len, a);
  quick_high_to_a(a, b, top_half_len);
  if (top_half_len == n || top_half_len == 0)
    return;
  quicksort(top_half_len, a, b);
  quick_smtof(a, top_half_len);
  quicksort(n - top_half_len, a, b);
  quick_smtob(a, top_half_len);
}

t_element	*arg_to_list(char **arg, int nb, int *nbneg, int *is_letter)
{
  t_element	*a;
  int		to_put;

  a = NULL;
  nb = nb;
  if (nb < 2)
    return (NULL);
  while (nb > 1)
    {
      to_put = my_getnbr(arg[nb - 1], nbneg, is_letter);
      a = add_top(a, to_put);
      nb = nb - 1;
    }
  return (a);
}

int		main(int nb, char **arg)
{
  t_element	*a;
  t_element	*b;
  int		nbneg;
  int		is_letter;

  is_letter = 0;
  nbneg = 0;
  a = NULL;
  b = NULL;
  a = arg_to_list(arg, nb, &nbneg, &is_letter);
  if (error_msg(a, is_letter, nb) == 84)
    return (84);
  if (nb <= 5000)
    quicksort(len_elem(a), &a, &b);
  else
    radix(&a, &b, nbneg);
  my_putstr("rra ra\n");
  return (0);
}
