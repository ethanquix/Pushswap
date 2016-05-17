/*
** basic_swap.c for pushswap in /home/wyzlic_a/blih/c_elem/CPE_2015_Pushswap
**
** Made by Dimitri Wyzlic
** Login   <wyzlic_a@epitech.net>
**
** Started on  Mon Apr 18 17:18:14 2016 Dimitri Wyzlic
** Last update Sun Apr 24 04:47:23 2016 Dimitri Wyzlic
*/

#include "my.h"

t_element	*sa(t_element *list, char *letter)
{
  t_element	*temp;
  t_element	*out;

  if (len_elem(list) < 2)
    return (list);
  my_putstr(letter);
  out = list->next;
  temp = out;
  out->next = list;
  out->prev = list->prev;
  list->next = temp->next;
  list->prev = out;
  return (out);
}

int	pa(t_element **a, t_element **b, char *letter)
{
  if (*b == NULL)
    return (1);
  my_putstr(letter);
  *a = add_top(*a, (*b)->val);
  *b = delete_top(*b);
  return (1);
}

t_element	*ra(t_element *a, char *letter)
{
  if (a == NULL)
    return (NULL);
  if (len_elem(a) <= 1)
    return (a);
  my_putstr(letter);
  return (a->next);
}

t_element	*rra(t_element *a, char *letter)
{
  if (a == NULL)
    return (NULL);
  if (len_elem(a) <= 1)
    return (a);
  my_putstr(letter);
  return (a->prev);
}
