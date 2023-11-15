#include <iostream>

const int Degree_to_Minute = 60;
const int Minute_to_Second = 60;

int main() {
	int degree, minute, second;
	float degree_answer;
	std::cout << "Enter a latitude in degrees, minutes, and seconds" << std::endl;
	std::cout << "First, enter the degree:";
	std::cin >> degree;
	std::cout << "Next, enter the minutes of arc:";
	std::cin >> minute;
	std::cout << "Finally, enter the seconds of arc:";
	std::cin >> second;
	degree_answer = degree + float(minute) / Degree_to_Minute + float(second) / (Degree_to_Minute * Minute_to_Second);
	std::cout << degree << " degrees, " << minute << " minutes, " << second << " seconds = " << degree_answer << " degrees" << std::endl;
	system("pause");
	return 0;
}