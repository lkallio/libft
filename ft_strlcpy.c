/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkallio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 23:42:44 by lkallio           #+#    #+#             */
/*   Updated: 2019/11/05 23:52:52 by lkallio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	dstsize_original;

	dstsize_original = dstsize;
	if (ft_strlen(dst) > dstsize)
		return (dstsize + ft_strlen(src));
	dst[--dstsize] = 0;
	while (dstsize--)
		dst[dstsize] = src[dstsize];
	return (dstsize_original);
}
