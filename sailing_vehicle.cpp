#include "sailing_vehicle.h"

sailing_vehicle::sailing_vehicle(string b, double f, bool lic_req) : vehicle(b, f) {
	set_license_required(lic_req);
}

void sailing_vehicle::set_license_required(bool lic_req) {
	license_required = lic_req;
}

ostream& operator<<(ostream& ostr, const sailing_vehicle& name) {
	ostr << "brand: " << name.get_brand() << endl;
	return ostr;
}
