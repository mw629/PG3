#include <stdio.h>

class Vehicle {
public:
	virtual void Run()=0;
};

class Car :public Vehicle {
public:
	void Run() { printf("車 :時速40km\n"); }
};

class Bicycle :public Vehicle {
public:
	void Run() { printf("自転車 :時速15km"); }
};

int main() {

	Vehicle* vehicle[2];

	vehicle[0] = new Car();
	vehicle[1] = new Bicycle();

	for (int i = 0; i < 2; i++) {
		vehicle[i]->Run();
	}


	return 0;
}