#include "Vehicle.h"
#include "Car.h"
#include "Bicycle.h"

int main() {

	Vehicle *vehicle[2];

	vehicle[0] = new Car();
	vehicle[1] = new Bicycle();

	for (int i = 0; i < 2; i++) {
		vehicle[i]->Run();
	}


	return 0;
}