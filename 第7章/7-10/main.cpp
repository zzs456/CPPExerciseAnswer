#include <iostream>
using namespace std;

double add(double,double);
double sub(double,double);
double calculate(double,double,double (*) (double,double));

int main(){

    double q = calculate(2.5,10.4,add);
    cout << "The answer of add is " << q << endl;
    double t = calculate(2.5,10.4,sub);
    cout << "The answer of add is " << t << endl;
    return 0;
}

double add(double x,double y){
    return x + y;
}

double sub(double x,double y){
    return x - y;
}

double calculate(double x,double y,double (*pf) (double x1,double x2)){
    return pf(x,y);
}
