#include <iostream>
#include <conio.h>
#include <windows.h>
#include <SFM

using namespace std;

int money;

int main(){
    while (1){
        if (GetAsyncKeyState(0x01)){
            money++;
            cout << money << endl;
            Sleep(100);

        } else if (GetAsyncKeyState(0x02)) 
            return 0; 
    }
    getch();
    return 0;                                                                                               
}