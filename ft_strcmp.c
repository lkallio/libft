/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkallio <lkallio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 16:37:56 by lkallio           #+#    #+#             */
/*   Updated: 2019/10/28 22:15:44 by lkallio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2)
{
	if (*s1 != *s2)
		return ((unsigned char)*s1 - (unsigned char)*s2);
	if (*s1)
		return (ft_strcmp(s1 + 1, s2 + 1));
	return (0);
}
