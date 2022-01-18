#include "ft_printf.h"

int	ft_print_xX(t_flags flags, va_list ap)
{
	char				*num;
	unsigned long long	n;

	n = (unsigned long long)va_arg(ap, unsigned int);
	num = ft_itoa_xX(n, flags);
	flags.ln = ft_strlen(num);
	ft_putstr_fd(num, 1);
	if (num != 0)
		free(num);
	return (flags.ln);
}
