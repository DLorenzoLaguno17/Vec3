#ifndef  _VEC3_H_
#define _VEC3_H_

template<class TYPE>

class Vec3 {
public:
	//Methods
	Vec3 normalize() {
		Vec3 newVec3;
		
		newVec3.x = x / (sqrt((x) ^ 2 + (y) ^ 2 + (z) ^ 2));
		newVec3.y = y / (sqrt((x) ^ 2 + (y) ^ 2 + (z) ^ 2);
		newVec3.y = z / (sqrt((x) ^ 2 + (y) ^ 2 + (z) ^ 2));

		return newVec3;
	}

	void zero() {
		x = 0;
		y = 0;
		z = 0;
	}

	bool is_zero() {
		if (x == 0 && y == 0 && z == 0) {
			return true;
		}
		else {
			return false;
		}
	}

	float distance_to(Vec3* v) {		
		float dx = v->x - x;
		float dy = v->y - y;
		float dz = v->z - z;

		dist = sqrt((dx) ^ 2 + (dy) ^ 2 + (dz) ^ 2);

		return abs(dist);
	}

	//Operators

private:
	TYPE x, y, z;
};

#endif // _VEC3_H_

