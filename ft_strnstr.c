/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkallio <lkallio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 00:54:05 by lkallio           #+#    #+#             */
/*   Updated: 2019/10/30 10:02:45 by lkallio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nlcmp(const char *hs, const char *nl, size_t n)
{
	if (!*nl)
		return (1);
	if (*nl != *hs || !n)
		return (0);
	return (ft_nlcmp(++hs, ++nl, --n));
}

char		*ft_strnstr(const char *hs, const char *nl, size_t n)
{
	if (!*nl)
		return ((char *)hs);
	if (!*hs || !n)
		return (0);
	if (ft_nlcmp(hs, nl, n))
		return ((char *)hs);
	return (ft_strnstr(++hs, nl, --n));
}
