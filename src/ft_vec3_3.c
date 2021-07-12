/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec3_3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkallio <lkallio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 20:08:19 by lkallio           #+#    #+#             */
/*   Updated: 2021/07/07 20:08:20 by lkallio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vecft.h"

t_vec3	vpow(t_vec3 src, t_vec3 dst)
{
	return ((t_vec3){
		.x = powf(src.x, dst.x),
		.y = powf(src.y, dst.y),
		.z = powf(src.z, dst.z)
	});
}

t_vec3	neg_vec3(t_vec3 in)
{
	return ((t_vec3){
		.x = -in.x,
		.y = -in.y,
		.z = -in.z
	});
}

t_vec3	vec3(float x, float y, float z)
{
	return ((t_vec3){x, y, z});
}

t_vec3	vec43(t_vec4 p)
{
	return ((t_vec3){p.x, p.y, p.z});
}

t_vec3	vec23(t_vec2 p, float z)
{
	return ((t_vec3){p.x, p.y, z});
}
