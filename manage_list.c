/*
** manage_list.c for pushswap in /home/wyzlic_a/blih/c_elem/CPE_2015_Pushswap
**
** Made by Dimitri Wyzlic
** Login   <wyzlic_a@epitech.net>
**
** Started on  Mon Apr 18 15:06:48 2016 Dimitri Wyzlic
** Last update Sun Apr 24 04:46:00 2016 Dimitri Wyzlic
*/

#include "my.h"

t_element	*create_list(int val)
{
  t_element	*out;

  out = malloc(sizeof(t_element));
  if (out == NULL)
    return (NULL);
  out->val = val;
  out->next = out;
  out->prev = out;
  return (out);
}

t_element	*add_top(t_element *next, int val)
{
  t_element	*out;

  out = malloc(sizeof(t_element));
  if (out == NULL)
    return (NULL);
  if (next == NULL)
    {
      free(out);
      return (create_list(val));
    }
  out->val = val;
  out->next = next;
  out->prev = next->prev;
  next->prev->next = out;
  next->prev = out;
  return (out);
}

void		print_liste(t_element *liste)
{
  t_element	*temp;
  t_element	*final;

  if (liste == NULL)
    {
      my_putstr("Liste nulle");
      return;
    }
  temp = liste;
  final = liste;
   while (temp->next != final)
    {
      my_put_nbr(temp->val);
      my_putstr(",");
      temp = temp->next;
    }
  my_put_nbr(temp->val);
  my_putchar('\n');
}
