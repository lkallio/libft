/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkallio <lkallio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 12:17:54 by lkallio           #+#    #+#             */
/*   Updated: 2019/10/31 14:42:42 by lkallio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *src)
{
	char	*copy;
	int		i;

	i = 0;
	if (!(copy = (char *)malloc(ft_strlen(src) + 1)))
		return (0);
	while (*src)
		copy[i++] = *(src++);
	copy[i] = 0;
	return (copy);
}
