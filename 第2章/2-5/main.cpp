#include <iostream>

// ×ª»»º¯Êý
double convert(double d);

int main() {

	double c_degree;
	std::cout << "Please enter a Celsius value:";
	std::cin >> c_degree;

	double f_degree;
	f_degree = convert(c_degree);
	std::cout << c_degree << " degree Celsius is " << f_degree << " degree Fahrenheit." << std::endl;
	system("pause");
	return 0;
}

double convert(double d) {
	return d * 1.8 + 32;
}