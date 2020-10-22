#include <iostream>
#include "xSquare.h"
//#include "..\labs_cpp\lab3\lab3A\random_t.cpp"

using namespace Prog3_4;

int main() {
	int i=100;
	double b=0, u=1;
	do {
		std::cout << "Enter the number of tests [>50]:";
		//std::cin >> i;
		std::cout << std::endl;
	} while (i <= 50);
	do {
		std::cout << "Enter the boundaries of the range of numbers separated by a space (bottom_limit upper_limit):";
		//std::cin >> b >> u;
		std::cout << std::endl;
	} while (b && u);
	xSquare X(i, b, u);
	X.Test(i);
	return 0;
}
