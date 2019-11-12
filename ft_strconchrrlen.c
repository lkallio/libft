/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strconchrrlen.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkallio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 19:32:57 by lkallio           #+#    #+#             */
/*   Updated: 2019/10/31 20:00:16 by lkallio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strconchrrlen(const char *s, int (*f)(int), int truth_value)
{
	int		len;
	int		index;

	len = ft_strlen(s);
	index = len;
	while (index--)
		if (f(s[index]) != truth_value)
			return (index);
	return (len);
}
