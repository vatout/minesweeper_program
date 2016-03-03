/*
** my_buffer.c for my_buffer.c in /home/vatout_a/epitech/taff/EPC/BSQ
**
** Made by Vatoutine
** Login   <vatout_a@epitech.net>
**
** Started on  Wed Dec 16 13:28:35 2015 Vatoutine
** Last update Fri Dec 18 21:53:43 2015 Vatoutine
*/

#include "./include/my.h"
#include "./include/funk.h"

int	**fill_mine_tab(int **mine, char **buffer, t_trash *trash)
{
  int	q;
  int	w;

  q = 0;
  w = 0;
  while (q < trash->heigth)
    {
      while (w < trash->length)
	{
	  if (buffer[q][w] == '.')
	    mine[q][w] = 1;
	  else if (buffer[q][w] == 'o')
	    mine[q][w] = 0;
	  w++;
	}
      w = 0;
      q++;
    }
  return (mine);
}

int	**init_mine_tab(int **mine, t_trash *trash)
{
  int	z;

  z = 0;
  if ((mine = malloc(sizeof(int *) * (trash->heigth))) == NULL)
    return (0);
  while (z < trash->heigth)
    {
      if ((mine[z] = malloc(sizeof(int *) * (trash->length))) == NULL)
	return (0);
      z++;
    }
  return (mine);
}

char	**fill_buffer_tab(char **buffer, char *filepath, t_trash *trash)
{
  int	fd;
  char	b;

  fd = open(filepath, O_RDONLY);
  while (b != '\n')
    {
      read(fd, &b, 1);
      if (b == '\n')
	{
	  while ((read(fd, &b, 1)) != 0)
	    {
	      buffer[trash->d][trash->e] = b;
	      if (b == '\n')
		buffer[trash->d][trash->e] = '\0';
	      trash->e++;
	      if (b == '\n')
	      {
		trash->d++;
		trash->e = 0;
		}
	    }
	}
    }
  close(fd);
  return (buffer);
}

char	**init_buffer_tab(char **buffer, t_trash *trash)
{
  int	z;

  z = 0;
  if ((buffer = malloc(sizeof(char *) * (trash->heigth + 1))) == NULL)
    return (0);
  while (z < trash->heigth)
    {
      if ((buffer[z] = malloc(sizeof(char *) * (trash->length + 1))) == NULL)
	return (0);
      z++;
    }
  return (buffer);
}
