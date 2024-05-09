#include <iostream>
using namespace std;

struct point {
	double m_x;
	double m_y;
	point(double x, double y) {
		 m_x =x;
		 m_y = y;
	}
	point() {};
};

void print_point( point& point_object) {
	std::cout << "x:" << point_object.m_x << ", y: " << point_object.m_y << std::endl;
}

int main()
{

	int i ;
	for( i = 0; i < 5; i++) {
		point my_point(i, i*2);
		print_point(my_point);
	}
	
	return 0;
}

