/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkallio <lkallio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 13:51:26 by lkallio           #+#    #+#             */
/*   Updated: 2021/03/10 13:51:28 by lkallio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_rstrex(char *s, char *p, int i)
{
	static int	ept[2];
	char		*ret;

	if (*p == '(' && *++p)
		ept[0] = i;
	if (*p == ')' && *++p)
		ept[1] = i;
	if (*s != *p && *p != '*')
		return (0);
	if (!*s && (!*p || *p == '*'))
	{
		!ept[1] ? ept[1] = i : 0;
		ret = malloc(ept[1] - ept[0] + 1);
		ret ? ret[ept[1] - ept[0]] = 0 : 0;
		return (ret);
	}
	ret = ft_rstrex(s + 1, p + !(*p == '*' && p[1] != *s), i + 1);
	if (ret && i >= ept[0] && i <= ept[1])
		ret[i - ept[0]] = *s;
	if (!i && !(ept[0] = 0))
		ept[1] = 0;
	return (ret);
}

char	*ft_strex(char *s, char *p)
{
	return (ft_rstrex(s, p, 0));
}