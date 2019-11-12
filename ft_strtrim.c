/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkallio <lkallio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 00:54:19 by lkallio           #+#    #+#             */
/*   Updated: 2019/10/31 20:12:55 by lkallio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	if (!s)
		return (0);
	if (ft_iswspace(*s) == 1)
		return (ft_strtrim(s + 1));
	return (ft_strndup(s, ft_strconchrrlen(s, &ft_iswspace, 1) + 1));
}
