#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int main(){
    while (1){
        if (GetAsyncKeyState(0x01)){
            cout << "Left Mkey";
            Sleep(100);
        } else if (GetAsyncKeyState(0x09))
            break;
    }

    getch();
    cout << "Hi" << endl;
    cout << "Hello" << endl;
    return 0;                                                                                               
}