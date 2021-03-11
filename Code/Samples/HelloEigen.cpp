#include <Eigen/Dense>
#include <iostream>

int main()
{
	Eigen::Matrix4f m1, m2;

	m1 <<  1,  2,  0,  5,
		   3,  1,  0,  0,
		   0,  4,  1,  0,
		   0,  0,  0,  1;

	m2 = m1.inverse();

	std::cout << m2 << std::endl;

#if 0
	Eigen::Matrix4f m1, m2, m3;

	m1 <<  1,  2,  3,  4,
		   5,  6,  7,  8,
		   9, 10, 11, 12,
		  13, 14, 15, 16;

	m2 <<  1,  2,  3,  4,
		   5,  6,  7,  8,
		   9, 10, 11, 12,
		  13, 14, 15, 16;

	m3 = m1 * m2;

	std::cout << m3 << std::endl;
#endif

	return 0;
}
