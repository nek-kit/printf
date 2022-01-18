#include "ft_printf.h"

int	ft_print_str(t_flags flags, va_list ap)
{
	char	*str;

	str = va_arg(ap, char *);
	if (str == 0)
	{
		str = "(null)";
		flags.ln = 6;
	}
	else
		flags.ln = ft_strlen(str);
	ft_putstr_fd(str, 1);
	return (flags.ln);
}
