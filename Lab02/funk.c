#include <math.h>
#include "funk.h"

_Bool select(float x, float y) {
	float r;
	r = sqrt((x*x) + (y*y));

	if (x <= 0 && x >= -1 && y >= 0 && y <= 1) {
		return 1;
	}
	else if (r <= 1 && x >= 0 && y <= 0) {
		return 1;
	}
	else {
		return 0;
	}
}

float f(float x) {
	return x >= 0 ? cos(2 * x) : -(1 / (x*x + 1));
}