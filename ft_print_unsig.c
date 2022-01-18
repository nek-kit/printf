#include "ft_printf.h"

int	ft_print_unsig(int x, t_flags flags, va_list ap)
{
	unsigned int	c;
	char			*num;

	x = 2;
	c = va_arg(ap, unsigned int);
	num = ft_itoa_unsig(c);
	flags.ln = ft_strlen(num);
	if (*num == '0')
		write(1, &num[0], 1);
	else
		ft_putstr_fd(num, 1);
	if (num != 0)
		free(num);
	return (flags.ln);
}
