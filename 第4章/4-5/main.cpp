#include <iostream>
using namespace std;

struct CandyBar
{
    char brand[20];
    float weight;
    unsigned int calorie;
};

int main(){
    CandyBar snack = {"Mocha Munch",2.3,350};
    cout << "My favourite CandyBar is " << snack.brand << "." << endl;
    cout << "And its weight is " << snack.weight << ", calorie is " << snack.calorie << "." << endl;
     
    return 0;
}
