#include <iostream>
#include "Vec3.h"

int main() {
	Vec3<int> intVector1 = { 3, 9, 8 };
	Vec3<int> intVector2 = { 2, 1, 4 };
	Vec3<int> intVector3 = { 7, 7, 7 };

	Vec3<float> floatVector1 = {5.5f, 1.23f, 7.96f};
	Vec3<float> floatVector2 = { 7.5f, -3.23f, 0.96f };

	//Methods testing
	//intVector.zero();

	std::cout << "-------------------- METHODS TESTING -----------------" << std::endl;
	if(intVector1.is_zero())
		std::cout << "True" << std::endl;
	else
		std::cout << "False" << std::endl;

	std::cout << "The distance between floatVector1 and floatVector2 is " << floatVector1.distance_to(&floatVector2) << std::endl;
	
	intVector1.normalize();
	std::cout << "The intVector1 normalized is " << intVector1.x << " " << intVector1.y << " " << intVector1.z << std::endl;

	floatVector2.normalize();
	std::cout << "The floatVector2 normalized is " << floatVector2.x << " " << floatVector2.y << " " << floatVector2.z << std::endl;

	//Operators testing
	std::cout << "\n" << std::endl;
	std::cout << "------------------- OPERATORS TESTING ----------------" << std::endl;
	
	std::cout << "The new Vec3 (+) is " << intVector1.operator+(intVector3).x << " " << intVector1.operator+(intVector3).y << " " << intVector1.operator+(intVector3).z << std::endl;

	std::cout << "The new Vec3 (-) is " << intVector3.operator-(intVector2).x << " " << intVector3.operator-(intVector2).y << " " << intVector3.operator-(intVector2).z << std::endl;

	intVector1.operator=(intVector3);
	std::cout << "The new intVector1 is " << intVector1.x << " " << intVector1.y << " " << intVector1.z << std::endl;

	if (floatVector1.operator==(floatVector2))
		std::cout << "True" << std::endl;
	else
		std::cout << "False" << std::endl;

	std::cout << "\n" << std::endl;
	system("pause");
	return 0;
}