#include <iostream>

int main() {
	
	float mile,gallon;
	float fuel_consume;

	std::cout << "���������(Ӣ��): ";
	std::cin >> mile;
	std::cout << "������������(����): ";
	std::cin >> gallon;
	fuel_consume = mile / gallon;
	std::cout << "�ͺ�Ϊ: " << fuel_consume << " miles/gallon" << std::endl;
	system("pause");
	return 0;
}