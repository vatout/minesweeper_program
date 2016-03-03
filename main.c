/*
** main.c for main.c in /home/vatout_a/taff/EPC/BSQ
**
** Made by Vatoutine Artem
** Login   <vatout_a@epitech.net>
**
** Started on  Thu Dec  3 14:09:14 2015 Vatoutine Artem
** Last update Fri Dec 18 21:33:27 2015 Vatoutine
*/

#include "./include/my.h"
#include "./include/funk.h"

int		main(int ac, char **av)
{
  t_trash	*trash;

  if (ac != 2)
    return (0);
  if ((trash = malloc(sizeof(t_trash))) == NULL)
    return (0);
  init_trash_struct(trash);
  my_bsq_base(av[1], trash);
  return (0);
}
