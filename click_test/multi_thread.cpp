#include <iostream>
#include <windows.h>
#include <thread>
#include <conio.h>
using namespace std;

void print()
{
    int count{0};
    while (count < 100)
    {
        Sleep(1000);
        cout << "print : hello world " << count++ << endl;
        if ( kbhit() )
        {
            cout << "ji shuan ji zhu cheng yuan li " << endl;
            
        }
    }
}

int main()
{
    // thread t1(print);
    // t1.detach();
    // for (int i = 0; i < 100; i++)
    // {
    //     cout << "main : " << i << endl;
    // }

    // cout << "hello world main" << endl;

    print();
}