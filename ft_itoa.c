#include "ft_printf.h"

static int	len_n(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i++;
	while (n != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	sign;
	unsigned int	len;

	len = len_n(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		sign = (-1) * n;
	}
	else
		sign = n;
	str[len] = '\0';
	while (sign > 9)
	{
		str[len - 1] = (sign % 10) + '0';
		len--;
		sign = sign / 10;
	}
	str[len - 1] = sign + '0';
	return (str);
}
