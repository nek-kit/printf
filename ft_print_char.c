#include "ft_printf.h"

int	ft_print_char(int x, t_flags flags, va_list ap)
{
	char	sym;

	if (flags.type == '%')
		sym = '%';
	else
		sym = (char)va_arg(ap, int);
	x = write(1, &sym, 1);
	return (x);
}
