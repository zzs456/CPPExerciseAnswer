#include <iostream>

// 显示时间函数
void showTime(int hour,int minute);

int main() {

	int hour, minute;

	std::cout << "Enter the number of hours: ";
	std::cin >> hour;
	std::cout << "Enter the number of minutes: ";
	std::cin >> minute;

	showTime(hour,minute);
	system("pause");
	return 0;
}

void showTime(int hour, int minute) {
	std::cout << "Time: " << hour << ":" << minute << std::endl;
}