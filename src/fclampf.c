/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fclampf.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkallio <lkallio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 20:08:05 by lkallio           #+#    #+#             */
/*   Updated: 2021/06/23 20:08:06 by lkallio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

float	fclampf(float val, float min, float max)
{
	if (val > max)
		return (max);
	if (val < min)
		return (min);
	return (val);
}
