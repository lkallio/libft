/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkallio <lkallio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 13:49:43 by lkallio           #+#    #+#             */
/*   Updated: 2021/07/08 16:13:02 by lkallio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcdup(char **dst, const char *src, int c, int i)
{
	int	ret;

	if (*src != c && *src)
	{
		ret = ft_strcdup(dst, src + 1, c, i + 1);
		if (ret == -1)
			return (-1);
		(*dst)[i] = *src;
		return (ret);
	}
	else
	{
		*dst = (char *)malloc(i + 1);
		if (!*dst)
			return (-1);
		(*dst)[i] = 0;
		return (*src == c);
	}
}
