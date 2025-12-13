#include <stdio.h>

template <typename T>

class Math {
public:

	T num1;
	T num2;

	Math(T num1, T num2) :num1(num1), num2(num2){};

	T Min() {
		if (num1 < num2) { return num1; }
		else { return num2; }
	};

};

int main() {

	Math<int> intMath(2,5);
	Math<float> floatMath(2.0f, 5.0f);
	Math<double> doubleMath(2.000f, 5.00f);


	printf("int型では%d\n", intMath.Min());
	printf("float型では%f\n", floatMath.Min());
	printf("double型では%fl\n", doubleMath.Min());

	return 0;
}