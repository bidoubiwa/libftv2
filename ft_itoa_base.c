#include "libft.h"
#include <stdio.h>

static int	ft_pow(unsigned int v, int base)
{
	if (v == 0)
		return (0);
	else
		return (1 + ft_pow(v / base, base));
}

char		*ft_itoa_base(unsigned int value, unsigned int base)
{
	char			*res;
	unsigned int	p;
	int				i;

	i = ft_pow(value, base);
	p = value;
	if (!(res = ft_strnew(i)) || base < 2 || base > 16)
		return (NULL);
	while (--i >= 0)
	{
		res[i] = (p % base < 10)? p % base + 48 : p % base - 10 + 'a';
		p = p / base;
	}
	return (res);
}
