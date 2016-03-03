/*
** my.h for my.h in /home/vatout_a/lib/my
**
** Made by Vatoutine Artem
** Login   <vatout_a@epitech.net>
**
** Started on  Sun Nov 15 14:26:47 2015 Vatoutine Artem
** Last update Fri Dec 18 21:42:14 2015 Vatoutine
*/

#ifndef MY_H_
# define MY_H_

# include <stdarg.h>
# include "./funk.h"

char	**color_square(char **buffer, t_pos *pos);
int	check_smallest(int **mine, int x, int y);
t_pos	*check_square(int **mine, t_trash *trash, t_pos *pos);
int	my_special(char **buffer, t_trash *trash);
void	free_all(int **mine, char **buffer, t_trash *trash, t_pos *pos);
int	check_smallest(int **mine, int x, int y);
int	**calc_mine_tabx(int **mine, t_trash *trash);
int	**calc_mine_taby(int **mine, t_trash *trash);
int	my_compare_base(char **buffer, int **mine, t_trash *trash);
int	my_bsq(char *filepath, t_trash *trash);
int	my_bsq_base(char *filepath, t_trash *trash);
void	print_mine_tab(int **mine, t_trash *trash);
void	print_buffer_tab(char **buffer, t_trash *trash);
void	my_aff(char **buffer, t_trash *trash);
void	print_mine_tab(int **mine, t_trash *trash);
char	**fill_buffer_tab(char **buffer, char *filepath, t_trash *trash);
char	**init_buffer_tab(char **buffer, t_trash *trash);
int	**fill_mine_tab(int **mine, char **buffer, t_trash *trash);
int	**init_mine_tab(int **mine, t_trash *trash);
t_pos	*init_pos_struct(t_pos *pos);
t_trash	*init_trash_struct(t_trash *trash);
t_trash	*my_read_size(char *filepath, t_trash *trash);
t_trash	*read_heigth(t_trash *trash, int fd);
t_trash	*read_length(t_trash *trash, int fd);
int	my_printf(const char *src, ...);
int	my_va_conv_nbr(va_list ap);
void	my_put_oct(unsigned int nb);
int	my_va_conv_soct(va_list ap);
int	my_va_conv_putchar(va_list ap);
int	my_va_conv_putstr(va_list ap);
int	my_va_conv_ld(va_list ap);
int	my_va_conv_lld(va_list ap);
int	my_va_conv_long(va_list ap);
int	my_va_conv_hexmin(va_list ap);
int	my_va_conv_hexmaj(va_list ap);
int	my_va_conv_oct(va_list ap);
int	my_va_conv_bin(va_list ap);
int	my_va_conv_adr(va_list ap);
void	my_putchar(char c);
int	my_put_nbr(int nb);
int	my_putstr(char *str);
int	my_getnbr(char *str);

#endif /* MY_H_ */
