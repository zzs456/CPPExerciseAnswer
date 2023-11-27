#include <iostream>
using namespace std;

int main(){
    double temp,sum = 0;
    do{
        cout << "Input a number to add: ";
        cin >> temp;
        sum += temp;
        cout << "sum = " << sum << endl;
    }while(temp != 0);
    cout << "Input end.\n" << "The sum = " << sum << endl;
    return 0;
}