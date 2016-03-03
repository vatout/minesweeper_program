/*
** ne my_read.c for my_read.c in /home/vatout_a/epitech/taff/EPC/BSQ
**
** Made by Vatoutine
** Login   <vatout_a@epitech.net>
**
** Started on  Tue Dec 15 13:11:56 2015 Vatoutine
** Last update Fri Dec 18 21:53:11 2015 Vatoutine
*/

#include "./include/my.h"
#include "./include/funk.h"

t_trash	*read_length(t_trash *trash, int fd)
{
  char	a;

  a = '\0';
  while (a != '\n')
    {
      read(fd, &a, 1);
      if (a == '\n')
	{
	  read(fd, &a, 1);
	  while (a != '\n')
	    {
	      read(fd, &a, 1);
	      trash->length++;
	    }
	}
    }
  return (trash);
}

t_trash	*read_heigth(t_trash *trash, int fd)
{
  char	a;
  char	*res;
  int	c;

  a = '\0';
  if ((res = malloc(sizeof(*res) + 1)) == NULL)
    return (0);
  c = 0;
  while (a != '\n')
    {
      read(fd, &a, 1);
      res[c] = a;
      c++;
    }
  trash->heigth = my_getnbr(res);
  free(res);
  return (trash);
}

t_trash	*my_read_size(char *filepath, t_trash *trash)
{
  int	fd;

  fd = open(filepath, O_RDONLY);
  if (fd == -1)
    exit (0);
  read_heigth(trash, fd);
  read_length(trash, fd);
  trash->total = trash->length * trash->heigth;
  return (trash);
}
