/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkallio <lkallio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 00:54:13 by lkallio           #+#    #+#             */
/*   Updated: 2019/10/30 10:40:38 by lkallio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_nlcmp(const char *hs, const char *nl)
{
	if (!*nl)
		return (1);
	return (*hs == *nl && ft_nlcmp(hs + 1, nl + 1));
}

char		*ft_strstr(const char *hs, const char *nl)
{
	if (!*nl)
		return ((char *)hs);
	if (!*hs)
		return (0);
	if (ft_nlcmp(hs, nl))
		return ((char *)hs);
	return (ft_strstr(++hs, nl));
}
