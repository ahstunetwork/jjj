#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    Sleep(2000);
    POINT p;
    GetCursorPos(&p);  //1292 15
    cout << p.x << " " << p.y << endl;
 
    system("pause");

}