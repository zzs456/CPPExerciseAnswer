#include <iostream>
using namespace std;

void showMenu();

int main(){

    char choice;
    showMenu();
    cin.get(choice);
    while(choice != 'c' && choice != 'p' && choice != 't' && choice != 'g'){
        cin.get();
        cout << "Please enterr a c,p,t,or g: ";
        cin.get(choice);
    }
    switch(choice){
        case 'c':
            break;
        case 'p':
            break;
        case 't':
            cout << "A maple is a tree.";
        case 'g':
            break;
    }
    return 0;
}

void showMenu(){
    cout << "Please enter one of the following choices:\n";
    cout << "c) carnivore\t\t\tp) pianist\n";
    cout << "t) tree\t\t\t\tg) game\n";
}