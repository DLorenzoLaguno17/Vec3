#ifndef  _VEC3_H_
#define _VEC3_H_

template<class TYPE>

class Vec3 {
public:
	//Constructors
	Vec3() {}

	Vec3(TYPE x_, TYPE y_, TYPE z_) : x(z_), y(y_), z(z_){}

	//Methods
	Vec3 normalize() {
		Vec3 newVec3;
		
		newVec3.x = x / (sqrt((x) ^ 2 + (y) ^ 2 + (z) ^ 2));
		newVec3.y = y / (sqrt((x) ^ 2 + (y) ^ 2 + (z) ^ 2));
		newVec3.y = z / (sqrt((x) ^ 2 + (y) ^ 2 + (z) ^ 2));

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

	float distance_to(Vec3* v) const {		
		float dx = v->x - x;
		float dy = v->y - y;
		float dz = v->z - z;

		dist = sqrt((dx) ^ 2 + (dy) ^ 2 + (dz) ^ 2);

		return abs(dist);
	}

	//Operators
	Vec3 operator+(const Vec3 &v) const {
		Vec3 newVec3;

		newVec3.x = x + v.x;
		newVec3.y = y + v.y;
		newVec3.z = z + v.z;

		return newVec3;
	}

	Vec3 operator-(const Vec3 &v) const {
		Vec3 newVec3;

		newVec3.x = x - v.x;
		newVec3.y = y - v.y;
		newVec3.z = z - v.z;

		return newVec3;
	}

	void operator+=(const Vec3 &v) {
		x += v.x;
		y += v.y;
		z += v.z;
	}

	void operator-=(const Vec3 &v) {		
		x -= v.x;
		y -= v.y;
		z -= v.z;
	}

	Vec3 operator=(const Vec3 &v) {
		x = v.x;
		y = v.y;
		z = v.z;
	}

	bool operator==(const Vec3 &v) const {
		return (x == v.x && y == v.y && z == v.z);
	}
	

private:
	TYPE x, y, z;
};

#endif // _VEC3_H_

