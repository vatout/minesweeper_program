/*
** my_bsq.c for my_bsq.c in /home/vatout_a/epitech/taff/EPC/BSQ
**
** Made by Vatoutine
** Login   <vatout_a@epitech.net>
**
** Started on  Wed Dec 16 18:39:43 2015 Vatoutine
** Last update Fri Dec 18 21:46:52 2015 Vatoutine
*/

#include "./include/my.h"
#include "./include/funk.h"

int	my_bsq(char *filepath, t_trash *trash)
{
  char	**buffer;
  int	**mine;

  buffer = NULL;
  mine = NULL;
  buffer = init_buffer_tab(buffer, trash);
  buffer = fill_buffer_tab(buffer, filepath, trash);
  mine = init_mine_tab(mine, trash);
  mine = fill_mine_tab(mine, buffer, trash);
  my_compare_base(buffer, mine, trash);
  return (0);
}

int	my_bsq_base(char *filepath, t_trash *trash)
{
  init_trash_struct(trash);
  my_read_size(filepath, trash);
  my_bsq(filepath, trash);
  return (0);
}
