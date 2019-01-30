#include <iostream>

struct Point3D
{
	double x;
	double y;
	double z;
};

Point3D getZeroPoint()
{
	Point3D temp = { 0.0, 0.0, 0.0 };
	return temp;
}

int main()
{
	Point3D zero = getZeroPoint();

	if (zero.x == 0.0 && zero.y == 0.0 && zero.z == 0)
		std::cout << "The point is zero\n";
	else
		std::cout << "The point is not zero\n";

	return 0;

}
