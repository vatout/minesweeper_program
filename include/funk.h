/*
** funk.h for funk.h in /home/vatout_a/taff/USP/my_select
**
** Made by Vatoutine Artem
** Login   <vatout_a@epitech.net>
**
** Started on  Wed Dec  2 12:21:11 2015 Vatoutine Artem
** Last update Mon Jan  4 11:03:14 2016 Vatoutine
*/

#ifndef FUNK_H_
# define FUNK_H_

# include <sys/types.h>
# include <sys/stat.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

typedef	struct		s_trash
{
  int			length;
  int			heigth;
  int			total;
  int			d;
  int			e;
  int			c;
}			t_trash;

typedef	struct		s_pos
{
  int			x;
  int			y;
  int			size;
}			t_pos;

#endif /* FUNK_H_ */
