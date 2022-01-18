#include "ft_printf.h"

int	ft_type(t_flags flags, va_list ap)
{
	int	x;

	x = 0;
	if (flags.type == 'c' || flags.type == '%')
		return (ft_print_char(x, flags, ap));
	if (flags.type == 's')
		return (ft_print_str(flags, ap));
	if (flags.type == 'd' || flags.type == 'i')
		return (ft_print_int(x, flags, ap));
	if (flags.type == 'u')
		return (ft_print_unsig(x, flags, ap));
	if (flags.type == 'x' || flags.type == 'X')
		return (ft_print_xX(flags, ap));
	if (flags.type == 'p')
		return (ft_print_pnt(flags, ap));
	return (x);
}
