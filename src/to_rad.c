#include <math.h>

float	to_rad(float degrees)
{
	static float	v = (float)M_PI / 180.0f;

	return (degrees * v);
}
