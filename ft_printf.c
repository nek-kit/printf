#include "ft_printf.h"

int	ft_search_type(char c, char *str)
{
	while (*str != 0)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

t_flags	ft_clean_flags(t_flags flags)
{
	flags.ln = 0;
	flags.type = 0;
	return (flags);
}

int	ft_parse(int x, va_list ap, const char *format)
{
	int		j;
	t_flags	flags;

	j = 0;
	while (format[j] != 0)
	{
		if (format[j] == '%')
		{
			j++;
			flags = ft_clean_flags(flags);
			if (ft_search_type(format[j], "cspdiuxX%"))
				flags.type = format[j];
			else
				return (-1);
			x = x + ft_type(flags, ap);
		}
		else
			x = x + write(1, &format[j], 1);
		j++;
	}
	return (x);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		x;

	x = 0;
	va_start(ap, format);
	x = ft_parse(x, ap, format);
	va_end(ap);
	return (x);
}
