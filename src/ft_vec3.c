/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkallio <lkallio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 20:08:11 by lkallio           #+#    #+#             */
/*   Updated: 2021/07/12 12:06:53 by lkallio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "vecft.h"

float	vlen(t_vec3 p)
{
	return (sqrtf(p.x * p.x + p.y * p.y + p.z * p.z));
}

t_vec3	vnormalize(t_vec3 in)
{
	float	inv;

	inv = rsqrt(in.x * in.x + in.y * in.y + in.z * in.z);
	return ((t_vec3){
		.x = in.x * inv,
		.y = in.y * inv,
		.z = in.z * inv
	});
}

t_vec3	vcross(t_vec3 a, t_vec3 b)
{
	return ((t_vec3){
		a.y * b.z - a.z * b.y,
		a.z * b.x - a.x * b.z,
		a.x * b.y - a.y * b.x
	});
}

t_vec3	vadd(t_vec3 dst, t_vec3 src)
{
	return ((t_vec3){
		.x = dst.x + src.x,
		.y = dst.y + src.y,
		.z = dst.z + src.z
	});
}

t_vec3	vsub(t_vec3 dst, t_vec3 src)
{
	return ((t_vec3){
		.x = dst.x - src.x,
		.y = dst.y - src.y,
		.z = dst.z - src.z
	});
}
