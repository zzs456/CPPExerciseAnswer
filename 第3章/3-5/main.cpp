#include <iostream>

int main() {
	long long global_amount, american_amount;
	double percent;

	std::cout << "Enter the world's population: ";
	std::cin >> global_amount;
	std::cout << "Enter the population of US: ";
	std::cin >> american_amount;
	percent = 100 * double(american_amount) / double(global_amount);
	std::cout << "The population of the US is " << percent << "% of the world population." << std::endl;
	system("pause");
	return 0;
}