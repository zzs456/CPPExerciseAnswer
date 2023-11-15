#include <iostream>

void print_mice(void);

void print_run(void);

int main() {

	print_mice();
	print_mice();

	print_run();
	print_run();
	return 0;
}

void print_mice(void) {
	std::cout << "Three bline mice" << std::endl;
}

void print_run(void) {
	std::cout << "See how they run" << std::endl;
}