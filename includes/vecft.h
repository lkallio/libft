#ifndef VECFT_H
# define VECFT_H

# include <math.h>

typedef struct s_vec4
{
	float		x;
	float		y;
	float		z;
	float		w;
}	t_vec4;

typedef struct s_vec3
{
	float		x;
	float		y;
	float		z;
}	t_vec3;

typedef struct s_vec2
{
	float	x;
	float	y;
}	t_vec2;

typedef struct s_mat
{
	t_vec4	m[4];
}	t_mat;

float	v2len(t_vec2 p);
t_vec2	v2normalize(t_vec2 p);
float	v2dot(t_vec2 p, t_vec2 q);
t_vec2	vec2(float x, float y);
t_vec2	vec32(t_vec3 p);
float	vlen(t_vec3 p);
t_vec3	vnormalize(t_vec3 in);
t_vec3	vcross(t_vec3 a, t_vec3 b);
t_vec3	vadd(t_vec3 dst, t_vec3 src);
t_vec3	vsub(t_vec3 dst, t_vec3 src);
t_vec3	vdiv(float div, t_vec3 src);
t_vec3	vmul(t_vec3 src, float mul);
t_vec3	vvmul(t_vec3 src, t_vec3 dst);
float	vdot(t_vec3 src, t_vec3 dst);
float	vfdot(t_vec3 vec, float f);
t_vec3	vpow(t_vec3 src, t_vec3 dst);
t_vec3	neg_vec3(t_vec3 in);
t_vec3	vec3(float x, float y, float z);
t_vec3	vec43(t_vec4 p);
t_vec3	vec23(t_vec2 p, float z);
t_vec3	vfunc(t_vec3 p, float (*f)(float));
t_vec3	vfunc2(t_vec3 d, t_vec3 s, float (*f)(float, float));
t_vec4	vec34(t_vec3 p, float w);
t_vec4	vec4(float x, float y, float z, float w);
t_mat	m_trans(t_vec3 coord);
t_mat	m_scale(t_vec3 coord);
t_vec4	mv_mul(t_vec4 vtx, t_mat mat);
t_mat	m_mul(t_mat d, t_mat s);
t_mat	m_idty(void);
t_mat	m_xrot(float a);
t_mat	m_yrot(float a);
t_mat	m_zrot(float a);
t_mat	mat(t_vec4 a, t_vec4 b, t_vec4 c, t_vec4 d);
t_vec3	vec3clamp(t_vec3 vec, float min, float max);

#endif