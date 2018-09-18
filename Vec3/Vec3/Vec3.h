#ifndef  _VEC3_H_
#define _VEC3_H_

template<class TYPE>

class Vec3 {
public:
	//Constructors
	Vec3() {}

	Vec3(TYPE x, TYPE y, TYPE z) : x(x), y(y), z(z){}

	Vec3(const Vec3& vector) : x(vector.x), y(vector.y), z(vector.z) {}

	//Methods
	Vec3 normalize() {
		Vec3 newVec3;
		
		newVec3.x = x / (sqrt(pow(x, 2) + pow(y, 2) + pow(y, 2)));
		newVec3.y = y / (sqrt(pow(x, 2) + pow(y, 2) + pow(y, 2)));
		newVec3.z = z / (sqrt(pow(x, 2) + pow(y, 2) + pow(y, 2)));

		return newVec3;
	}

	void zero() {
		x = 0;
		y = 0;
		z = 0;
	}

	bool is_zero() const {
		return (x == 0 && y == 0 && z == 0);
	}

	float distance_to(Vec3* vector) const {		
		float distance;
		
		float dx = vector->x - x;
		float dy = vector->y - y;
		float dz = vector->z - z;

		distance = sqrt(pow(dx,2) + pow(dy,2) + pow(dy,2));

		return abs(distance);
	}

	//Operators
	Vec3 operator+(const Vec3 &vector) const {
		Vec3 newVec3;

		newVec3.x = x + vector.x;
		newVec3.y = y + vector.y;
		newVec3.z = z + vector.z;

		return newVec3;
	}

	Vec3 operator-(const Vec3 &vector) const {
		Vec3 newVec3;

		newVec3.x = x - vector.x;
		newVec3.y = y - vector.y;
		newVec3.z = z - vector.z;

		return newVec3;
	}

	void operator+=(const Vec3 &vector) {
		x += vector.x;
		y += vector.y;
		z += vector.z;
	}

	void operator-=(const Vec3 &vector) {		
		x -= vector.x;
		y -= vector.y;
		z -= vector.z;
	}

	void operator=(const Vec3 &vector) {
		x = vector.x;
		y = vector.y;
		z = vector.z;
	}

	bool operator==(const Vec3 &vector) const {
		return (x == vector.x && y == vector.y && z == vector.z);
	}
	
public:
	TYPE x, y, z;

};

#endif // _VEC3_H_

