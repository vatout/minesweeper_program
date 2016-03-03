/*
** my_check.c for my_check.c in /home/vatout_a/epitech/taff/EPC/BSQ
**
** Made by Vatoutine
** Login   <vatout_a@epitech.net>
**
** Started on  Fri Dec 18 16:25:06 2015 Vatoutine
** Last update Fri Dec 18 20:26:31 2015 Vatoutine
*/

#include "./include/my.h"
#include "./include/funk.h"

char	**color_square(char **buffer, t_pos *pos)
{
  int	a;
  int	b;
  int	c;
  int	d;

  a = pos->y;
  b = pos->x;
  c = 1;
  d = 1;
  while (c <= pos->size)
    {
      while (d <= pos->size)
	{
	  buffer[a][b] = 88;
	  b--;
	  d++;
	}
      b = pos->x;
      a--;
      d = 1;
      c++;
    }
  return (buffer);
}

t_pos	*check_square(int **mine, t_trash *trash, t_pos *pos)
{
  int	a;
  int	b;

  a = 0;
  b = 0;
  pos->size = mine[pos->y][pos->x];
  while (a < trash->heigth)
    {
      while (b < trash->length)
	{
	  if (pos->size < mine[a][b])
	    {
	      pos->size = mine[a][b];
	      pos->y = a;
	      pos->x = b;
	    }
	  b++;
	}
      b = 0;
      a++;
    }
  return (pos);
}

int	check_smallest(int **mine, int x, int y)
{
  int	res;
  int	b;
  int	c;
  int	d;

  b = mine[y][x - 1];
  c = mine[y - 1][x - 1];
  d = mine[y - 1][x];
  res = b;
  if (mine[y][x] != 0)
    {
      if (c < res)
	res = c;
      if (d < res)
	res = d;
      return (res + 1);
    }
  else if (mine[y][x] == 0)
    return (0);
  return (0);
}
