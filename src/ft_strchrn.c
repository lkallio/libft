/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchrn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkallio <lkallio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 00:53:32 by lkallio           #+#    #+#             */
/*   Updated: 2019/10/28 22:06:16 by lkallio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strchrn(const char *s, int c)
{
	return (!*s ? 0 : (*s == (char)c) + ft_strchrn(s + 1, c));
}
