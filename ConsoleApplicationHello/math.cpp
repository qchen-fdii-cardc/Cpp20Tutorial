module;
#include <iostream>
module math;

int MyFunc(int i) {
	std::cout << "value of i = " << i << std::endl;
	return i + i;
}

double Strange(double a, double b) {
	return a * b + a + b;
}