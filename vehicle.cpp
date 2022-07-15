#include "vehicle.h"

vehicle::vehicle(string b, double f) {
	brand = b;
	fuel_amount = f;
}

void vehicle::set_brand(string b) {
	brand = b;
}

string vehicle::get_brand() const {
	return brand;
}

ostream& operator<<(ostream& ostr, const vehicle& name) {
	ostr << "Placeholder text";
	return ostr;
}
