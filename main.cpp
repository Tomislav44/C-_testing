#include <iostream>

#include "vehicle.h"
#include "driving_vehicle.h"
#include "flying_vehicle.h"
#include "sailing_vehicle.h"
#include "car.h"

using namespace std;

string function_1() {
	return "Basic functionality\n";
}
string function_2() {
	return "Premium functionality\n";
}

string(*fnctpntr)() { &function_1 };

int main(void) {

	cout << fnctpntr();

	try {
		car car1("Volkswagen", 100.0, "Golf e-hybrid");
		cout << car1 << endl;
	}
	catch (...) {}

	sailing_vehicle boat1("Bayliner", 100.0, false);

	cout << boat1 << endl;
	try {
	}
	catch (...) {}

	return 0;
}
