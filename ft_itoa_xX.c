#include "ft_printf.h"

int	ft_sizex(unsigned long long num)
{
	int	j;

	j = 1;
	while (num >= 16)
	{
		num = num / 16;
		j++;
	}
	return (j);
}

int	ft_typex(t_flags flags)
{
	int	change;

	if (flags.type == 'X')
		change = 55;
	else
		change = 87;
	return (change);
}

char	*ft_itoa_xX(unsigned long long num, t_flags flags)
{
	char	*str;
	int		size;
	int		mod;
	int		typex;

	typex = ft_typex(flags);
	size = ft_sizex(num);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (str == 0)
		return (NULL);
	if (num == 0)
		str[0] = '0';
	str[size--] = '\0';
	while (num > 0)
	{
		mod = num % 16;
		if (mod > 9)
			str[size] = mod + typex;
		else
			str[size] = mod + '0';
		num = num / 16;
		size--;
	}
	return (str);
}
