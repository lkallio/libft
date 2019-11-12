/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkallio <lkallio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 00:53:01 by lkallio           #+#    #+#             */
/*   Updated: 2019/11/05 10:06:02 by lkallio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ritoa(char **out, int n, int size_count)
{
	int		i;

	if (n / 10)
	{
		if ((i = ft_ritoa(out, n / 10, ++size_count)) < 0)
			return (-1);
	}
	else
	{
		if (!(*out = (char *)malloc(size_count + 1)))
			return (-1);
		(*out)[size_count] = 0;
		i = n < 0 ? 1 : 0;
	}
	n = n < 0 ? -(n % 10) : (n % 10);
	(*out)[i++] = n + '0';
	return (i);
}

char		*ft_itoa(int n)
{
	char	*out;
	int		i;

	i = n < 0 ? 2 : 1;
	if (ft_ritoa(&out, n, i) < 0)
		return (0);
	if (n < 0)
		*out = '-';
	return (out);
}
