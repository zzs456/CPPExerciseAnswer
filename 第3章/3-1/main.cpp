#include <iostream>

const int Foot_to_Inch = 12;

int main() {
	int height;
	std::cout << "�����������(Ӣ��): ";
	std::cin >> height;
	std::cout << "�������Ϊ: " << height / Foot_to_Inch << " Ӣ�� "
		<< height % Foot_to_Inch << " Ӣ��" << std::endl;
	system("pause");
	return 0;
}