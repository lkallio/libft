#include "vecft.h"
#include "libft.h"

t_vec3	vfunc(t_vec3 p, float (*f)(float))
{
	return ((t_vec3){
		.x = f(p.x),
		.y = f(p.y),
		.z = f(p.z)
	});
}

t_vec3	vfunc2(t_vec3 d, t_vec3 s, float (*f)(float, float))
{
	return ((t_vec3){
		.x = f(d.x, s.x),
		.y = f(d.y, s.y),
		.z = f(d.z, s.z)
	});
}

t_vec3	vec3clamp(t_vec3 vec, float min, float max)
{
	return (vec3(
		fclampf(vec.x, min, max),
		fclampf(vec.y, min, max),
		fclampf(vec.z, min, max)
		));
}
