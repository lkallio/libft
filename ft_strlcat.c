/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkallio <lkallio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 00:53:47 by lkallio           #+#    #+#             */
/*   Updated: 2019/11/06 00:17:27 by lkallio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;

	dstlen = ft_strlen(dst);
	if (dstlen > dstsize || !dstsize)
		return (ft_strlen(src) + dstsize);
	if (dstsize > dstlen)
	{
		ft_strncpy(dst + dstlen, src, dstsize - dstlen - 1);
		dst[dstsize - 1] = 0;
	}
	return (dstlen + ft_strlen(src));
}
