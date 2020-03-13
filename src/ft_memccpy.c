/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkallio <lkallio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 00:53:04 by lkallio           #+#    #+#             */
/*   Updated: 2019/10/28 18:35:46 by lkallio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	int				i;

	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	i = -1;
	while (1)
	{
		if (!n--)
			return (0);
		i++;
		d[i] = s[i];
		if (s[i] == (unsigned char)c)
			return (dst + ++i);
	}
}
