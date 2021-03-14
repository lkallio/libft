#include "libft.h"

static t_strtol	get_vars(const char *s, int base)
{
	register int	sign;

	while (ft_iswspace(*s))
		s++;
	sign = *s == '-' ? -1 : 1;
	*s == '+' || *s == '-' ? s++ : 0;
	if (*s == '0' && ft_tolower(s[1]) == 'x'
		&& (base == 16 || !base))
	{
		base = 16;
		s += 2;
	}
	if (!base)
		base = *s == '0' && ++s ? 8 : 10;
	return ((t_strtol){
		.sign = sign, .base = base, .s = s, .num = 0,
		.cutoff = (FT_LONGMAX + (sign < 0)) / base,
		.cutlim = (FT_LONGMAX + (sign < 0)) % base
	});
}

long	ft_strtol(const char *s, char **endptr, int base)
{
	register t_strtol	v;

	v = get_vars(s, base);
	while ((v.c = *v.s++))
	{
		if (ft_isdigit(v.c))
			v.c -= '0';
		else if (ft_isalpha(v.c))
			v.c = ft_tolower(v.c) - 'a' + 10;
		else
			break ;
		if (v.c >= v.base || v.num > v.cutoff ||
			(v.num == v.cutoff && v.c > v.cutlim))
			break ;
		v.num = v.num * v.base + v.c;
	}
	if (endptr)
		*endptr = (char *) v.s - 1;
	return (v.sign * v.num);
}