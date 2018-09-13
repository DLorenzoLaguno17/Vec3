#include <iostream>
#include "Vec3.h"

int main() {
	Vec3<int> intVector = {3, 9, 4};
	Vec3<float> floatVector1 = {5.5f, 1.23f, 7.96f};
	Vec3<float> floatVector2 = { 7.5f, -3.23f, 0.96f };

	//Methods testing
	intVector.zero();

	std::cout << "-------------------- METHODS TESTING -----------------" << std::endl;
	if(intVector.is_zero())
		std::cout << "True" << std::endl;
	else
		std::cout << "False" << std::endl;

	std::cout << "------------------------------------------------------" << std::endl;
	std::cout << "The distance between floatVector1 and floatVector2 is " << floatVector1.distance_to(&floatVector2) << std::endl;

	//Operators testing
	std::cout << "\n" << std::endl;
	std::cout << "------------------- OPERATORS TESTING ----------------" << std::endl;

	std::cout << "\n" << std::endl;
	system("pause");
	return 0;
}