#include <iostream>

const float Kilogram_to_Pound = 2.2f;	// 千克和磅的转换

const int Foot_to_Inch = 12;	// 英尺和英寸的转换

const float Inch_toMeter = 0.0254f;		// 英寸和米的转换

int main() {

	int height_foot, height_inch;
	float weight_pound, height, weight, BMI;
	std::cout << "请输入英尺: ";
	std::cin >> height_foot;
	std::cout << "请输入英寸: ";
	std::cin >> height_inch;
	std::cout << "请输入体重(磅): ";
	std::cin >> weight_pound;
	height = (height_foot * Foot_to_Inch + height_inch) * Inch_toMeter;
	weight = weight_pound / Kilogram_to_Pound;
	BMI = weight / (height * height);
	std::cout << "您的 BMI 为: " << BMI << std::endl;
	system("pause");
	return 0;
}
