#include "ft_printf.h"

int	ft_print_pnt(t_flags flags, va_list ap)
{
	char				*num;
	unsigned long long	n;

	n = va_arg(ap, unsigned long long);
	num = ft_itoa_xX(n, flags);
	flags.ln = ft_strlen(num) + 2;
	ft_putstr_fd("0x", 1);
	ft_putstr_fd(num, 1);
	if (num != 0)
		free(num);
	return (flags.ln);
}
