/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filetostr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkallio <lkallio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 20:25:42 by lkallio           #+#    #+#             */
/*   Updated: 2021/03/26 16:14:28 by lkallio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char		*ft_rfts(int fd, int i)
{
	char		*buf;
	char		*ret;
	ssize_t		bytes_read;

	if (!(buf = malloc(BUFF_SIZE)))
		return (0);
	bytes_read = read(fd, buf, BUFF_SIZE);
	if (bytes_read > 0)
		ret = ft_rfts(fd, i + BUFF_SIZE);
	else if (bytes_read < 0 ||
				!(ret = malloc(i + 1)))
		return (0);
	if (ret && bytes_read)
		ft_memcpy(ret + i, buf, bytes_read);
	else
		ret[i] = 0;
	free(buf);
	return (ret);
}

char			*ft_filetostr(int fd)
{
	if (fd < 0)
		return (0);
	return (ft_rfts(fd, 0));
}
