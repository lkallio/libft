/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkallio <lkallio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 00:54:19 by lkallio           #+#    #+#             */
/*   Updated: 2021/07/12 12:06:41 by lkallio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char *s)
{
	int		i;
	char	*ret;

	if (!s)
		return (0);
	i = -1;
	while (ft_iswspace(s[++i]))
		;
	ret = ft_strndup(s + i, ft_strconchrrlen(s + i, &ft_iswspace, 1) + 1);
	free(s);
	return (ret);
}
