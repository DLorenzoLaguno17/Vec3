#ifndef  _VEC3_H_
#define _VEC3_H_

template<class TYPE>

class Vec3 {
public:
	//Methods
	Vec3 normalize() = 0;
	Vec3 zero() = 0;
	bool is_zero() = 0;
	float distance_yo(Vec3* v) = 0;

	//Operators

private:
	TYPE x, y, z;
};

#endif // _VEC3_H_

