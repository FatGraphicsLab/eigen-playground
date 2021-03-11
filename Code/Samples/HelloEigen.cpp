#include <Eigen/Core>
#include <iostream>

int main()
{
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

	return 0;
}
