/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mat_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkallio <lkallio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 20:08:42 by lkallio           #+#    #+#             */
/*   Updated: 2021/07/07 20:08:42 by lkallio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vecft.h"

t_mat	m_idty(void)
{
	return ((t_mat){{
			{1.0f, 0, 0, 0},
			{0, 1.0f, 0, 0},
			{0, 0, 1.0f, 0.0f},
			{0, 0, 0, 1.0f},
		}});
}

t_mat	m_xrot(float a)
{
	return ((t_mat){{
			{1.0f, 0, 0, 0},
			{0, cos(a), sin(a), 0},
			{0, -sin(a), cos(a), 0.0f},
			{0, 0, 0, 1.0f},
		}});
}

t_mat	m_yrot(float a)
{
	return ((t_mat){{
			{cos(a), 0, -sin(a), 0},
			{0, 1, 0, 0},
			{sin(a), 0, cos(a), 0},
			{0, 0, 0, 1.0f},
		}});
}

t_mat	m_zrot(float a)
{
	return ((t_mat){{
			{cos(a), sin(a), 0, 0},
			{-sin(a), cos(a), 0, 0},
			{0, 0, 1.0f, 0},
			{0, 0, 0, 1.0f},
		}});
}

t_mat	mat(t_vec4 a, t_vec4 b, t_vec4 c, t_vec4 d)
{
	return ((t_mat){{a, b, c, d}});
}
