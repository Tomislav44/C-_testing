#include "car.h"

car::car(string b, double f, string m) : driving_vehicle(b, f) {
	set_model(m);
}

void car::set_model(string m) {
	model = m;
}

string car::get_model() const {
	return model;
}

ostream& operator<<(ostream& ostr, const car& name) {
	ostr << "Car: " << name.get_brand() << " " << name.get_model() << endl;
	return ostr;
}
