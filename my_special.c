/*
** my_special.c for my_special.c in /home/vatout_a/epitech/taff/EPC/BSQ
**
** Made by Vatoutine
** Login   <vatout_a@epitech.net>
**
** Started on  Fri Dec 18 14:40:38 2015 Vatoutine
** Last update Fri Dec 18 20:37:30 2015 Vatoutine
*/

#include "./include/my.h"
#include "./include/funk.h"

int	my_special_ycolumn(char **buffer, t_trash *trash)
{
  int	a;

  a = 0;
  while (a < trash->length)
    {
      if (buffer[0][a] == '.')
	buffer[0][a] = 88;
      a++;
    }
  my_aff(buffer, trash);
  return (0);
}

int	my_special_xcolumn(char **buffer, t_trash *trash)
{
  int	a;
  a = 0;
  while (a < trash->heigth)
    {
      if (buffer[a][0] == '.')
	buffer[a][0] = 88;
      a++;
    }
  my_aff(buffer, trash);
  return (0);
}

int	my_special(char **buffer, t_trash *trash)
{
  if (trash->length == 1)
    {
      my_special_ycolumn(buffer, trash);
      return (1);
    }
  if (trash->heigth == 1)
    {
      my_special_ycolumn(buffer, trash);
      return (1);
    }
  return (0);
}
