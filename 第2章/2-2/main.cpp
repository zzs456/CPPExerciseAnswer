#include <iostream>

int main() {
	using namespace std;
	double distance;
	cout << "请输入距离(long)：";
	cin >> distance;
	cout << distance << " long " << "可以表示为 " << 220 * distance << " 码" << endl;
	system("pause");
	return 0;
}