#ifndef __VEHICLE__
#define __VEHICLE__

#include <iostream>
#include <string>

using namespace std;

class vehicle
{
private:
	string brand;
	double fuel_amount;
public:
	vehicle(string b, double f);

protected:
	string get_brand() const;
	void set_brand(string brand);
	/*
	double get_fuel_amount();
	void set_fuel_amount();
	*/

	friend ostream& operator<<(ostream& ostr, const vehicle& name); // Functions as "to string" method
};

ostream& operator<<(ostream& ostr, const vehicle& name);

#endif __VEHICLE__