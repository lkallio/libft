/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkallio <lkallio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 00:53:06 by lkallio           #+#    #+#             */
/*   Updated: 2019/10/29 05:20:20 by lkallio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *area;

	area = (unsigned char*)s;
	while (n--)
	{
		if (*area == (unsigned char)c)
			return (area);
		if (*area)
			area++;
	}
	return (0);
}
