/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stri_extended.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkallio <lkallio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 20:08:02 by lkallio           #+#    #+#             */
/*   Updated: 2021/09/16 20:12:09 by lkallio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void stri_skip_wspace(t_stri *s)
{
	if (!s || !s->s)
		return ;
	while (s->s[s->i] && ft_iswspace(s->s[s->i]))
		s->i++;
}

int	stri_match(t_stri *si, char *word)
{
	int	word_len;

	word_len = ft_strlen(word);
	if (ft_strnequ(si->s + si->i, word, word_len) == 0)
		return (0);
	si->i += word_len;
	return (1);
}
