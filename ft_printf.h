#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>

typedef struct s_flags
{
	char	type;
	int		ln;
}			t_flags;

int		ft_printf(const char *format, ...);
int		ft_type(t_flags flags, va_list ap);
int		ft_print_char(int x, t_flags flags, va_list ap);
int		ft_print_str(t_flags flags, va_list ap);
int		ft_print_int(int x, t_flags flags, va_list ap);
int		ft_print_unsig(int x, t_flags flags, va_list ap);
int		ft_print_xX(t_flags flags, va_list ap);
int		ft_print_pnt(t_flags flags, va_list ap);
char	*ft_itoa_xX(unsigned long long num, t_flags flags);
char	*ft_itoa_unsig(unsigned int n);
size_t	ft_strlen(const char *s);
void	ft_putstr_fd(char *s, int fd);
char	*ft_itoa(int n);

#endif
