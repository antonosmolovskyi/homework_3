//#include "stdafx.h"
#include <iostream>

int main() {
	int number;
	std::cout << "Please enter the number  " << '/n';
	std::cin >> number;
	int count = 0;
	std::cout << "please enter the count  " << '/n';
	std::cin >> count;
	for (int i = 0; i < count; ++i) {
		int integer = 0;
		integer = number % 2;
		number /= 2;
		if(i == count-1 && integer == 1) {
			std::cout << '/n';
			std::cout << " YES ";
		}
		else if (i == count - 1 && integer != 1) {
			std::cout << '/n';
			std::cout << " NO ";
		}
	} 
	return 0;
}
