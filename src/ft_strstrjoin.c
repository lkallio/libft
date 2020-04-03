/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstrjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkallio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 17:56:09 by lkallio           #+#    #+#             */
/*   Updated: 2019/11/12 18:53:12 by lkallio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strstrjoin(char **dst, char *src, char *stop, int count)
{
	char		c;
	int			ret;

	if (**dst)
	{
		c = **dst;
		(*dst)++;
		ret = ft_strstrjoin(dst, src, stop, count + 1);
	}
	else if (*src && !ft_strchr(stop, *src))
	{
		c = *src;
		ret = ft_strstrjoin(dst, src + 1, stop, count + 1);
	}
	else
	{
		*dst = (char *)malloc(count + 1);
		dst[0][count] = 0;
		return (!!ft_strchr(stop, *src));
	}
	dst[0][count] = c;
	return (ret);
}
