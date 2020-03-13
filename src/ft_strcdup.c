/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkallio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 13:49:43 by lkallio           #+#    #+#             */
/*   Updated: 2019/10/31 14:16:05 by lkallio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strcdup(char **dst, const char *src, int c, int i)
{
	if (*src != c && *src)
		return (ft_strcdup(dst, src + 1, c, i + 1) && ((*dst)[i] = *src));
	else
	{
		if (!(*dst = (char *)malloc(i + 1)))
			return (0);
		(*dst)[i] = 0;
		return (1);
	}
}
