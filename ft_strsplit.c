/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkallio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 14:11:16 by lkallio           #+#    #+#             */
/*   Updated: 2019/10/31 19:31:47 by lkallio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_fill(char **out, char const *s, char c)
{
	if (!s || !*s)
		return (1);
	if (*s == c)
		return (ft_word_fill(out, s + 1, c));
	if (!(ft_strcdup(out, s, c, 0)))
		return (0);
	if (!(ft_word_fill(out + 1, ft_strchr(s, c), c)))
	{
		free(*out);
		return (0);
	}
	return (1);
}

static int	ft_wordcount(char const *s, char c)
{
	if (!*s)
		return (0);
	return ((*s != c && (*(s + 1) == c || !*(s + 1))) + ft_wordcount(s + 1, c));
}

char		**ft_strsplit(char const *s, char c)
{
	char	**out;
	int		wordcount;

	wordcount = ft_wordcount(s, c);
	if (!(out = (char **)malloc(sizeof(char *) * (wordcount + 1))))
		return (0);
	out[wordcount] = 0;
	if (!ft_word_fill(out, s, c))
	{
		free(out);
		out = 0;
	}
	return (out);
}
