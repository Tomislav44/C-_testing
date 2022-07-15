#ifndef __FLYING_VEHICLE__
#define __FLYING_VEHICLE__

#include <iostream>
#include <string>

#include "vehicle.h"

using namespace std;

class flying_vehicle: vehicle
{
private:
	string engine_type;
public:
	flying_vehicle();

	string get_engine_type();
	void set_engine_type(string eng_type);

	friend ostream& operator<<(ostream& ostr, const flying_vehicle& name); // Functions as "to string" method
};

ostream& operator<<(ostream& ostr, const flying_vehicle& name);

#endif __FLYING_VEHICLE__
