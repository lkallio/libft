/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkallio <lkallio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 00:53:55 by lkallio           #+#    #+#             */
/*   Updated: 2019/11/04 13:10:23 by lkallio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (*s1 != *s2 && n)
		return ((unsigned char)*s1 - (unsigned char)*s2);
	if (!*s1 || !n)
		return (0);
	return (ft_strncmp(++s1, ++s2, --n));
}
