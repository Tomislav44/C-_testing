#include "driving_vehicle.h"

driving_vehicle::driving_vehicle(string b, double f) : vehicle(b, f) {

}

string driving_vehicle::get_engine_type() {
	return engine_type;
}

void driving_vehicle::set_engine_type(string eng_type) {
	engine_type = eng_type;
}

ostream& operator<<(ostream& ostr, const driving_vehicle& name) {
	ostr << "Placeholder text";
	return ostr;
}
