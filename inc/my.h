/*
** my.h for pushwap in /home/wyzlic_a/blih/c_elem/CPE_2015_Pushswap
**
** Made by Dimitri Wyzlic
** Login   <wyzlic_a@epitech.net>
**
** Started on  Mon Apr 18 14:59:54 2016 Dimitri Wyzlic
** Last update Sun Apr 24 04:54:55 2016 Dimitri Wyzlic
*/

#ifndef MY_H_
# define MY_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct	s_element
{
  int		val;
  struct	s_element *next;
  struct	s_element *prev;
}		t_element;

t_element	*add_top(t_element *, int);
void		print_liste(t_element *);
void		my_putchar(char);
void		my_putstr(char *);
t_element	*delete_top(t_element *);
int		len_elem(t_element *);
t_element	*sa(t_element *, char *);
int		pa(t_element **, t_element **, char *);
t_element	*rra(t_element *, char *);
t_element	*ra(t_element *, char *);
int		pa_ra(t_element **, t_element **, char *);
t_element	*rra_ra(t_element *, char *);
t_element	*ra_ra(t_element *, char *);
int		ss(t_element **, t_element **);
int		rr(t_element **, t_element **);
int		rrr(t_element **, t_element **);
int		is_sort(t_element *);
void		my_put_nbr(int);
long double	calc_median(t_element *, int);
int		quick_high_to_b(t_element **, t_element **, int);
void		quick_to_init_a(int, t_element **);
void		quick_high_to_a(t_element **, t_element **, int);
void		quick_smtof(t_element **, int);
void		quick_smtob(t_element **, int);
int		my_getnbr(char *, int *, int *);
int		my_putstr_error(char *);
void		my_putchar_error(char);
int		error_msg(t_element *, int, int);
int		is_a_letter(char *, int, int *);
void		radix(t_element **, t_element **, int);

#endif /* MY_H_ */
