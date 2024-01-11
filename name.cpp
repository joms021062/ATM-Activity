#include<iostream>

int main() {

	int stored = 1000;

	std::cout << "Enter the value to be stored: ";
	int input;

	std::cin >> input;

	stored += input;

	std::cout << "The stored value is now: " << stored << std::endl;

return 0;

}
