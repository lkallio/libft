/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkallio <lkallio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 13:54:46 by lkallio           #+#    #+#             */
/*   Updated: 2020/11/13 14:54:50 by lkallio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *addr, size_t old_size,
			size_t size_incr, size_t mem_size)
{
	unsigned char	*old;
	unsigned char	*new;

	if (!size_incr)
		return (0);
	old = (unsigned char *)addr;
	if (!(new = (unsigned char *)malloc((old_size + size_incr) * mem_size)))
		return (0);
	ft_memmove(new, old, old_size * mem_size);
	ft_memset(new + old_size * mem_size, 0, size_incr * mem_size);
	if (addr)
		free(addr);
	return ((void *)new);
}
