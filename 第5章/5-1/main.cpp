#include <iostream>
using namespace std;

int main(){

    int min,max,sum = 0;
    cout << "Enter the first number: ";
    cin >> min;
    cout << "Enter the second number: ";
    cin >> max;
    for(int i = min;i <= max;i ++) sum += i;

    cout << "The sum of [" << min << "," << max << "] is " << sum << endl; 

    return 0;
}