#include "vecft.h"

t_vec4	vec34(t_vec3 p, float w)
{
	return ((t_vec4){p.x, p.y, p.z, w});
}

t_vec4	vec4(float x, float y, float z, float w)
{
	return ((t_vec4){x, y, z, w});
}
