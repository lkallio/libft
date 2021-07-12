/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_str.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkallio <lkallio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 13:38:52 by lkallio           #+#    #+#             */
/*   Updated: 2021/07/11 17:30:29 by lkallio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_next_line_str(char **str, char **line)
{
	if (*line != NULL)
		free(*line);
	if (*str == NULL)
		return (0);
	if (ft_strcdup(line, *str, '\n', 0) == -1)
		return (-1);
	*str = ft_strchr(*str, '\n');
	if (*str)
		*str += 1;
	return (1);
}
