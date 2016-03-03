/*
** my_free.c for my_free.c in /home/vatout_a/epitech/taff/EPC/BSQ
**
** Made by Vatoutine
** Login   <vatout_a@epitech.net>
**
** Started on  Thu Dec 17 16:23:54 2015 Vatoutine
** Last update Fri Dec 18 16:45:24 2015 Vatoutine
*/

#include "./include/my.h"
#include "./include/funk.h"

void	free_buffer_tab(char **buffer, t_trash *trash)
{
  int	z;

  z = 0;
  while (z < trash->heigth)
    {
      free(buffer[z]);
      z++;
    }
  free(buffer);
}

void	free_mine_tab(int **mine, t_trash *trash)
{
  int	z;

  z = 0;
  while (z < trash->heigth)
    {
      free(mine[z]);
      z++;
    }
  free(mine);
}

void	free_all(int **mine, char **buffer, t_trash *trash, t_pos *pos)
{
  free_mine_tab(mine, trash);
  free_buffer_tab(buffer, trash);
  free(trash);
  free(pos);
}
