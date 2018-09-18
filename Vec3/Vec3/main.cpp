#include <iostream>
#include "Vec3.h"

int main() {
	Vec3<int> intVector1 = { 3, 9, 8 };
	Vec3<int> intVector2 = { 2, 1, 4 };
	Vec3<int> intVector3 = { 7, 7, 7 };

	Vec3<float> floatVector1 = {5.5f, 1.23f, 7.96f};
	Vec3<float> floatVector2 = { 7.5f, -3.54f, 0.96f };
	Vec3<float> floatVector3 = { 2.21f, 6.62f, -4.03f };

	//Methods testing
	//intVector1.zero();

	std::cout << "-------------------- METHODS TESTING -----------------" << std::endl;
	if (intVector1.is_zero())
		std::cout << "True" << std::endl;
	else
		std::cout << "False" << std::endl;

	std::cout << "The distance between floatVector1 and floatVector2 is " << floatVector1.distance_to(&floatVector2) << std::endl;
	
	std::cout << "The intVector1 normalized is " <<	intVector1.normalize().x << " " << intVector1.normalize().y << " " << intVector1.normalize().z << std::endl;

	std::cout << "The floatVector2 normalized is " << floatVector2.normalize().x << " " << floatVector2.normalize().y << " " << floatVector2.normalize().z << std::endl;

	//Operators testing
	std::cout << "\n" << std::endl;
	std::cout << "------------------- OPERATORS TESTING ----------------" << std::endl;
	
	std::cout << "The new Vec3 (+) is " << intVector1.operator+(intVector3).x << " " << intVector1.operator+(intVector3).y << " " << intVector1.operator+(intVector3).z << std::endl;

	std::cout << "The new Vec3 (-) is " << intVector3.operator-(intVector2).x << " " << intVector3.operator-(intVector2).y << " " << intVector3.operator-(intVector2).z << std::endl;

	floatVector2.operator+=(floatVector1);
	std::cout << "The new floatVector2 (+=) is " << floatVector2.x << " " << floatVector2.y << " " << floatVector2.z << std::endl;

	floatVector1.operator-=(floatVector3);
	std::cout << "The new floatVector1 (-=) is " << floatVector1.x << " " << floatVector1.y << " " << floatVector1.z << std::endl;
	
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