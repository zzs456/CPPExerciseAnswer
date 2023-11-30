#include <iostream>
using namespace std;

void loop_print(const char* str,int n = 0);

int main(){

    loop_print("Hello World!");
    loop_print("Hello World!");
    loop_print("Hello World!",5);

    return 0;
}

void loop_print(const char* str,int n){
    static int func_count = 0;
    func_count ++;
    if(n == 0){
        cout << "Arguments = 0 ;\n";
        cout << str << endl;
    }else{
        cout << "Arguments != 0 ;\n";
        for(int i = 0;i < func_count;i ++){
            cout << str << endl;
        }
    }
}