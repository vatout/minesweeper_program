/*
** my_struct.c for my_struct.c in /home/vatout_a/epitech/taff/EPC/BSQ
**
** Made by Vatoutine
** Login   <vatout_a@epitech.net>
**
** Started on  Wed Dec 16 13:26:30 2015 Vatoutine
** Last update Fri Dec 18 21:51:03 2015 Vatoutine
*/

#include "./include/my.h"
#include "./include/funk.h"

t_pos	*init_pos_struct(t_pos *pos)
{
  pos->x = 0;
  pos->y = 0;
  pos->size = 0;
  return (pos);
}

t_trash	*init_trash_struct(t_trash *trash)
{
  trash->length = 0;
  trash->heigth = 0;
  trash->total = 0;
  trash->d = 0;
  trash->e = 0;
  trash->c = 0;
  return (trash);
}
