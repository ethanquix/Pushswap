/*
** basic_swap_two.c for pushswap in /home/wyzlic_a/blih/c_elem/CPE_2015_Pushswap
**
** Made by Dimitri Wyzlic
** Login   <wyzlic_a@epitech.net>
**
** Started on  Mon Apr 18 19:18:55 2016 Dimitri Wyzlic
** Last update Sun Apr 24 01:44:52 2016 Dimitri Wyzlic
*/

#include "my.h"

int	ss(t_element **a, t_element **b)
{
  my_putstr("ss");
  *a = sa(*a, "x");
  *b = sa(*b, "x");
  return (1);
}

int	rr(t_element **a, t_element **b)
{
  my_putstr("rr");
  *a = ra(*a, "x");
  *b = ra(*b, "x");
  return (1);
}

int	rrr(t_element **a, t_element **b)
{
  my_putstr("rrr");
  *a = rra(*a, "x");
  *b = rra(*b, "x");
  return (1);
}
