/*
** my_aff.c for my_aff.c in /home/vatout_a/epitech/taff/EPC/BSQ
**
** Made by Vatoutine
** Login   <vatout_a@epitech.net>
**
** Started on  Wed Dec 16 14:57:51 2015 Vatoutine
** Last update Fri Dec 18 16:00:02 2015 Vatoutine
*/

#include "./include/my.h"
#include "./include/funk.h"

void	print_mine_tab(int **mine, t_trash *trash)
{
  int	a;
  int	b;

  a = 0;
  b = 0;
  while (a < trash->heigth)
    {
      while (b < trash->length)
	{
	  my_put_nbr(mine[a][b]);
	  b++;
	}
      my_putchar('\n');
      b = 0;
      a++;
    }
}

void	print_buffer_tab(char **buffer, t_trash *trash)
{
  int	z;

  z = 0;
  while (z < trash->heigth)
    {
      my_printf("%s", buffer[z]);
      my_putchar('\n');
      z++;
    }
}

void	my_aff(char **buffer, t_trash *trash)
{
  print_buffer_tab(buffer, trash);
}
