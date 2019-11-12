/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkallio <lkallio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 00:53:45 by lkallio           #+#    #+#             */
/*   Updated: 2019/11/06 01:14:50 by lkallio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	char	*ret;

	s1_len = ft_strlen((char *)s1);
	if (!(ret = (char *)malloc(s1_len + ft_strlen(s2) + 1)))
		return (0);
	ft_strcpy(ret, s1);
	ft_strcpy(ret + s1_len, s2);
	return (ret);
}
