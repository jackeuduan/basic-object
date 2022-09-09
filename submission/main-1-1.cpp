#include <iostream>
#include "Unit.h"
#include <assert.h>

using namespace std;
int main()
{
	Unit u;
	assert(u.get_area() == 0.0);
	assert(u.get_num_bedrooms() == 0);
	assert(u.get_value() == 0);

	Unit u2(9000, 2, 89.5);
	assert(u2.get_area() == 89.5);
	assert(u2.get_num_bedrooms() == 2);
	assert(u2.get_value() == 9000);
	return 0;
}