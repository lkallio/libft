/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkallio <lkallio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 01:37:34 by lkallio           #+#    #+#             */
/*   Updated: 2019/11/01 15:23:12 by lkallio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_string_assign(char **p, char const *s, char (*f)(char), int i)
{
	if (!*s)
	{
		(*p)[i] = 0;
		return ;
	}
	(*p)[i] = f(*s);
	ft_string_assign(p, s + 1, f, i + 1);
}

char		*ft_strmap(char const *s, char (*f)(char))
{
	char *p;

	if (!s || !f || !(p = (char *)malloc(ft_strlen(s) + 1)))
		return (0);
	ft_string_assign(&p, s, f, 0);
	return (p);
}
