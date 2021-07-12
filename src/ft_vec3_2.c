/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec3_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkallio <lkallio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 20:08:22 by lkallio           #+#    #+#             */
/*   Updated: 2021/07/12 12:17:07 by lkallio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vecft.h"

t_vec3	vdiv(float div, t_vec3 src)
{
	return (vec3(
			div / src.x,
			div / src.y,
			div / src.z
		));
}

t_vec3	vmul(t_vec3 src, float mul)
{
	return ((t_vec3){
		.x = src.x * mul,
		.y = src.y * mul,
		.z = src.z * mul
	});
}

t_vec3	vvmul(t_vec3 src, t_vec3 dst)
{
	return ((t_vec3){
		.x = dst.x * src.x,
		.y = dst.y * src.y,
		.z = dst.z * src.z
	});
}

float	vdot(t_vec3 src, t_vec3 dst)
{
	return (src.x * dst.x + src.y * dst.y + src.z * dst.z);
}

float	vfdot(t_vec3 vec, float f)
{
	return (vec.x * f + vec.y * f + vec.z * f);
}
