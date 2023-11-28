#include <iostream>
#include <cctype>

using namespace std;

int main(){
    char input;
    cout << "Enter the character: ";
    cin >> input;
    while(input != '@'){
        if(isdigit(input)){
            cin.get();
            cin.get(input);
            continue;
        }else if(islower(input)){
            input = toupper(input);
        }else if(isupper(input)){
            input = tolower(input);
        }
        cout << input;
        cin.get(input);
    }
    return 0;
}