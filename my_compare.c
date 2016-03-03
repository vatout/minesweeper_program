/*
** my_compare.c for my_compare.c in /home/vatout_a/epitech/taff/EPC/BSQ
**
** Made by Vatoutine
** Login   <vatout_a@epitech.net>
**
** Started on  Tue Dec 15 17:47:37 2015 Vatoutine
** Last update Fri Dec 18 21:50:23 2015 Vatoutine
*/

#include "./include/my.h"
#include "./include/funk.h"

int	**calc_mine_taby(int **mine, t_trash *trash)
{
  int	x;
  int	y;

  x = 1;
  y = 1;
  while (y < trash->heigth)
    {
      while (x < trash->length)
	{
	  mine[y][x] = check_smallest(mine, x, y);
	  x++;
	}
      x = 1;
      y++;
    }
  return (mine);
}

int	**calc_mine_tabx(int **mine, t_trash *trash)
{
  int	x;
  int	y;

  x = 1;
  y = 1;
  while (x < trash->length)
    {
      while (y < trash->heigth)
	{
	  mine[y][x] = check_smallest(mine, x, y);
	  y++;
	}
      y = 1;
      x++;
    }
  return (mine);
}

int	my_compare_base(char **buffer, int **mine, t_trash *trash)
{
  t_pos	*pos;

  if ((pos = malloc(sizeof(*pos))) == NULL)
    return (0);
  init_pos_struct(pos);
  if (my_special(buffer, trash) == 1)
    return (0);
  if (trash->heigth > trash->length)
    calc_mine_taby(mine, trash);
  else
    calc_mine_tabx(mine, trash);
  check_square(mine, trash, pos);
  buffer = color_square(buffer, pos);
  my_aff(buffer, trash);
  free_all(mine, buffer, trash, pos);
  return (0);
}
