#ifndef __DRIVING_VEHICLE__
#define __DRIVING_VEHICLE__

#include <iostream>
#include <string>

#include "vehicle.h"

using namespace std;

class driving_vehicle: protected vehicle
{
private:
	string engine_type; // Gas, Diesel, Electric, etc.
public:
	driving_vehicle(string b, double f);

	string get_engine_type();
	void set_engine_type(string eng_type);

	friend ostream& operator<<(ostream& ostr, const driving_vehicle& name); // Functions as "to string" method
};

ostream& operator<<(ostream& ostr, const driving_vehicle& name);

#endif __DRIVING_VEHICLE__
