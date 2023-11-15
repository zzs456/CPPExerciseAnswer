#include <iostream>

const int Day_to_Hour = 24;
const int Hour_to_Minute = 60;
const int Minute_to_Second = 60;

int main() {
	long long seconds;
	std::cout << "ÇëÊäÈëÃëÊý: ";
	std::cin >> seconds;
	std::cout << seconds << " seconds = ";
	int days, hours, minutes;
	days = seconds / (Day_to_Hour * Hour_to_Minute * Minute_to_Second);
	seconds = seconds % (Day_to_Hour * Hour_to_Minute * Minute_to_Second);
	hours = seconds / (Hour_to_Minute * Minute_to_Second);
	seconds = seconds % (Hour_to_Minute * Minute_to_Second);
	minutes = seconds / Minute_to_Second;
	seconds = seconds % Minute_to_Second;
	std::cout << days << " days " << hours << " hours " << minutes << " minutes " << seconds << " seconds" << std::endl;
	system("pause");
	return 0;
}