/*
** manage_list_two.c for pushswap in /home/wyzlic_a/blih/c_elem/CPE_2015_Pushswap
**
** Made by Dimitri Wyzlic
** Login   <wyzlic_a@epitech.net>
**
** Started on  Mon Apr 18 16:23:09 2016 Dimitri Wyzlic
** Last update Sun Apr 24 04:50:10 2016 Dimitri Wyzlic
*/

#include "my.h"

t_element	*delete_top(t_element *liste)
{
  t_element	*next;

  if (liste->next == liste)
    next = NULL;
  else
    {
      next = liste->next;
      liste->prev->next = liste->next;
      liste->next->prev = liste->prev;
    }
  free(liste);
  return (next);
}

int		len_elem(t_element *liste)
{
  int		i;
  t_element	*fin;

  if (liste == NULL)
    return (0);
  fin = liste;
  liste = liste->next;
  i = 1;
  while (liste != fin)
    {
      liste = liste->next;
      i = i + 1;
    }
  return (i);
}
