#include <iostream>
using namespace std;

long double probability(int fnumbers,int snumber,int picks);

int main(){

    cout << "First number is 45, and special number is 27." << endl;
    cout << "The probability is one of the: " << probability(45,27,5) << endl;
    return 0;
}

long double probability(int fnumbers,int snumber,int picks){
    long double result = 1.0;
    int n;
    unsigned int p;
    for(n = fnumbers,p = picks;p > 0;n --,p --){
        result = result * n / p;
    }
    // cout << result << endl;
    return 1 / (result * snumber);
}