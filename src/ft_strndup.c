/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkallio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 16:19:02 by lkallio           #+#    #+#             */
/*   Updated: 2019/10/31 20:08:19 by lkallio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strndup(const char *s, int n)
{
	char	*copy;

	if (!(copy = malloc(n + 1)))
		return (0);
	ft_strncpy(copy, s, n);
	copy[n] = 0;
	return (copy);
}
