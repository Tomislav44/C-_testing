#ifndef __CAR__
#define __CAR__

#include <iostream>
#include <string>

#include "driving_vehicle.h"

using namespace std;

class car: driving_vehicle
{
private:
	string model;
public:
	car(string b, double f, string m);

	string get_model() const;
	void set_model(string m);

	friend ostream& operator<<(ostream& ostr, const car& name); // Functions as "to string" method
};

ostream& operator<<(ostream& ostr, const car& name);

#endif __CAR__
