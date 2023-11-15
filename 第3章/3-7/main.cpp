#include <iostream>

const float Gallon_to_Liter = 3.875f;

const float Hundred_Km_to_Mile = 62.14;

int main() {

	float fuel_consume_eur, fuel_consume_us;

	std::cout << "请输入欧洲风格的油耗(liters/100km): ";
	std::cin >> fuel_consume_eur;

	fuel_consume_us = Hundred_Km_to_Mile / (fuel_consume_eur / Gallon_to_Liter);

	std::cout << "对应的美国风格的油耗(miles/gallon): " << fuel_consume_us << std::endl;
	system("pause");
	return 0;
}