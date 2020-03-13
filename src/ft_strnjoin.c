/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkallio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 01:16:17 by lkallio           #+#    #+#             */
/*   Updated: 2019/11/06 02:12:02 by lkallio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnjoin(char const *s1, char const *s2, size_t len)
{
	size_t	s1_len;
	char	*ret;

	s1_len = ft_strlen((char *)s1);
	if (!(ret = (char *)malloc(s1_len + len + 1)))
		return (0);
	ft_strcpy(ret, s1);
	ft_strlcpy(ret + s1_len, s2, len + 1);
	return (ret);
}
