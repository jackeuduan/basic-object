#include "Unit.h"

Unit::Unit()
{
	this->num_beds = 0;
	this->unit_size = 0;
	this->unit_val = 0;
}

Unit::Unit(int unit_val, int num_beds, double unit_size)
{
	this->num_beds = num_beds;
	this->unit_size = unit_size;
	this->unit_val = unit_val;
}

int Unit::get_num_bedrooms()
{
	return this->num_beds;
}

int Unit::get_value()
{
	return this->unit_val;
}

double Unit::get_area()
{
	return this->unit_size;
}

void Unit::setParam(int unit_val, int num_beds, double unit_size)
{
	this->num_beds = num_beds;
	this->unit_size = unit_size;
	this->unit_val = unit_val;
}
