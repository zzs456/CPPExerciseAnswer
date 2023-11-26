#include <iostream>
#include <cstring>
using namespace std;

const int maxLength = 20;

int main(){

    char first_name[maxLength],last_name[maxLength];
    char full_name[maxLength * 2];
    cout << "Enter your first name: ";
    cin.getline(first_name,maxLength);
    cout << "Enter your last name: ";
    cin.getline(last_name,maxLength);
    strcpy(full_name,last_name);
    strcat(full_name," , ");
    strcat(full_name,first_name);
    cout << "Here's the information in a single string: ";
    cout << full_name << endl;
    return 0;
}