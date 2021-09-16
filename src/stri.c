/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stri.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkallio <lkallio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 20:07:11 by lkallio           #+#    #+#             */
/*   Updated: 2021/09/16 20:11:20 by lkallio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	stri_match_pattern(t_stri *si, char *pattern, char *haystack)
{
	char	*s;
	int		i;

	s = si->s;
	i = si->i;
	while (s[i] && *pattern)
	{
		if (s[i] == *pattern && ++pattern)
			continue ;
		if (*pattern != '*'
			|| !ft_strchr(haystack, s[i]))
			return (0);
		if (s[i] == pattern[1])
			pattern += 2;
		i++;
	}
	if (*pattern)
		return (0);
	si->i += i;
	return (1);
}

int	stri_atoi(t_stri *si)
{
	char	*endptr;
	int	ret;

	endptr = NULL;
	ret = ft_strtol(si->s + si->i, &endptr, 10);
	si->i += endptr - (si->s + si->i);
	return (ret);
}

void	stri_seekc(t_stri *si, int c, int skip)
{
	int	to_c;

	to_c = ft_strchrlen(si->s, c);
	si->s += to_c + skip;
}
