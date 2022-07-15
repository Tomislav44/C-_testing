#ifndef __SAILING_VEHICLE__
#define __SAILING_VEHICLE__

#include <iostream>
#include <string>

#include "vehicle.h"

using namespace std;

class sailing_vehicle: vehicle
{
private:
	bool license_required;
public:
	sailing_vehicle(string b, double f, bool lic_req);

	bool get_license_required();
	void set_license_required(bool lic_req);

	friend ostream& operator<<(ostream& ostr, const sailing_vehicle& name); // Functions as "to string" method
};

ostream& operator<<(ostream& ostr, const sailing_vehicle& name);

#endif __SAILING_VEHICLE__
