#include "vecft.h"

t_mat	m_trans(t_vec3 coord)
{
	return ((t_mat){{
			{1.0f, 0, 0, 0},
			{0, 1.0f, 0, 0},
			{0, 0, 1.0f, 0},
			vec34(coord, 1.0f)
		}});
}

t_mat	m_scale(t_vec3 coord)
{
	return ((t_mat){{
			{coord.x, 0, 0, 0},
			{0, coord.y, 0, 0},
			{0, 0, coord.z, 0},
			{0, 0, 0, 1.0f}
		}});
}

t_vec4	mv_mul(t_vec4 vtx, t_mat mat)
{
	return ((t_vec4){
			vtx.x * mat.m[0].x
			+ vtx.y * mat.m[1].x
			+ vtx.z * mat.m[2].x
			+ vtx.w * mat.m[3].x,
			vtx.x * mat.m[0].y
			+ vtx.y * mat.m[1].y
			+ vtx.z * mat.m[2].y
			+ vtx.w * mat.m[3].y,
			vtx.x * mat.m[0].z
			+ vtx.y * mat.m[1].z
			+ vtx.z * mat.m[2].z
			+ vtx.w * mat.m[3].z,
			vtx.x * mat.m[0].w
			+ vtx.y * mat.m[1].w
			+ vtx.z * mat.m[2].w
			+ vtx.w * mat.m[3].w
	});
}

t_mat	m_mul(t_mat d, t_mat s)
{
	return ((t_mat){{
		mv_mul(s.m[0], d),
		mv_mul(s.m[1], d),
		mv_mul(s.m[2], d),
		mv_mul(s.m[3], d)
	}});
}