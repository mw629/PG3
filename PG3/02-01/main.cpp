#include <iostream>
#include <Windows.h>

template <typename Type>

Type Min(Type a, Type b) {
	if (a < b) {
		return a;
	}
	else {
		return b;
	}

}

int main() {

	int intA = 4;
	int intB = 8;
	float floatA = 6.1f;
	float floatB = 3.7f;
	double doubleA=1.9382;
	double doubleB=6.9373;

	printf("int:%d float:%f double:%lf", Min<int>(intA, intB), Min<float>(floatA, floatB), Min<double>(doubleA, doubleB));

	return 0;
}