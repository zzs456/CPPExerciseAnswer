#include <iostream>

const float Kilogram_to_Pound = 2.2f;	// ǧ�˺Ͱ���ת��

const int Foot_to_Inch = 12;	// Ӣ�ߺ�Ӣ���ת��

const float Inch_toMeter = 0.0254f;		// Ӣ����׵�ת��

int main() {

	int height_foot, height_inch;
	float weight_pound, height, weight, BMI;
	std::cout << "������Ӣ��: ";
	std::cin >> height_foot;
	std::cout << "������Ӣ��: ";
	std::cin >> height_inch;
	std::cout << "����������(��): ";
	std::cin >> weight_pound;
	height = (height_foot * Foot_to_Inch + height_inch) * Inch_toMeter;
	weight = weight_pound / Kilogram_to_Pound;
	BMI = weight / (height * height);
	std::cout << "���� BMI Ϊ: " << BMI << std::endl;
	system("pause");
	return 0;
}
