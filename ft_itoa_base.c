#include "libft.h"
#include <stdio.h>

int		ft_pow(unsigned int v, int base)
{
	if (v == 0)
		return (1);
	else
		return (1 + ft_pow(v / base, base));
}

char	*ft_itoa_base(unsigned int value, unsigned int base)
{
	char			*res;
	unsigned int	p;
	unsigned int	i;

	i = ft_pow(value, base);
	p = value;
	if (!(res = malloc(sizeof(char) * i)))
		return (NULL);
	res[i--] = '\0';
	while (i--)
	{
		res[i] = (p % base < 10)? p % base + 48 : p % base - 10 + 'a';
		p = p / base;
	}
	return (res);
}
