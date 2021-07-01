#include "vecft.h"

float	v2len(t_vec2 p)
{
	return (sqrtf(p.x * p.x + p.y * p.y));
}

t_vec2	v2normalize(t_vec2 p)
{
	return (vec32(vnormalize(vec23(p, 0.0f))));
}

float	v2dot(t_vec2 p, t_vec2 q)
{
	return (p.x * q.x + p.y * q.y);
}

t_vec2 vec2(float x, float y)
{
	return ((t_vec2){x, y});
}

t_vec2	vec32(t_vec3 p)
{
	return ((t_vec2){p.x, p.y});
}
