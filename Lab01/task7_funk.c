#include <math.h>
#include "funk.h"

float x = 5;
float y = 8.2537;
float result;

void f(void) {
	result = (sin(x) + cos(2 * y - x)) / (cos(x) - sin(2 * y - x));
}