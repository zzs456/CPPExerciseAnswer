#include <iostream>

int main() {
	
	float mile,gallon;
	float fuel_consume;

	std::cout << "请输入里程(英里): ";
	std::cin >> mile;
	std::cout << "请输入汽油量(加仑): ";
	std::cin >> gallon;
	fuel_consume = mile / gallon;
	std::cout << "油耗为: " << fuel_consume << " miles/gallon" << std::endl;
	system("pause");
	return 0;
}