#include "ft_printf.h"

static unsigned int	len_n_unsig(unsigned int n)
{
	int	i;

	i = 1;
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*ft_zero_unsig(char *str, unsigned int n)
{
	if (n == 0)
		str[0] = '0';
	return (str);
}

char	*ft_itoa_unsig(unsigned int n)
{
	char	*str;
	int		len;

	len = len_n_unsig(n);
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len--] = '\0';
	if (n == 0)
		return (ft_zero_unsig(str, n));
	if (n < 0)
	{
		str[0] = '-';
		n = (-1) * n;
	}
	while (n > 0)
	{
		str[len] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	return (str);
}
