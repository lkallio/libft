/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec4.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkallio <lkallio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 20:08:09 by lkallio           #+#    #+#             */
/*   Updated: 2021/07/07 20:08:09 by lkallio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vecft.h"

t_vec4	vec34(t_vec3 p, float w)
{
	return ((t_vec4){p.x, p.y, p.z, w});
}

t_vec4	vec4(float x, float y, float z, float w)
{
	return ((t_vec4){x, y, z, w});
}
