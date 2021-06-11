#include "libft.h"

float	ft_strtof(const char *str)
{
	int	i;
	int	after_decimal;
	float	res;
	float	div;

	if (str[0] == '-')
		return (-ft_strtof(str + 1));
	after_decimal = 0;
	i = -1;
	res = 0;
	div = 10.0f;
	while (str[++i])
	{
		if (str[i] == '.' && !after_decimal && ++i)
			after_decimal = 1;
		if (str[i] < '0' || str[i] > '9')
			return (res);
		if (!after_decimal)
			res = res * 10.0f + (float)(str[i] - '0');
		else
		{
			res += (float)(str[i] - '0') / div;
			div *= 10.0f;
		}
	}
	return (res);
}