#include <iostream>

// ×ª»»º¯Êý
double convert(double d);

int main() {

	double light_year;
	std::cout << "Enter the number of light years: ";
	std::cin >> light_year;
	double astron_unit;
	astron_unit = convert(light_year);
	std::cout << light_year << " light year = "
		<< astron_unit << " astronomical units." << std::endl;
	system("pause");
	return 0;
}

double convert(double d) {
	return 63240 * d;
}