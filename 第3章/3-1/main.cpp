#include <iostream>

const int Foot_to_Inch = 12;

int main() {
	int height;
	std::cout << "输入您的身高(英寸): ";
	std::cin >> height;
	std::cout << "您的身高为: " << height / Foot_to_Inch << " 英尺 "
		<< height % Foot_to_Inch << " 英寸" << std::endl;
	system("pause");
	return 0;
}