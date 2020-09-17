#include <iostream>
#include <windows.h>
using namespace std;

int main()
{

    int count{0};
    POINT p;
    Sleep(3000);

    GetCursorPos(&p); //1292 15     844 340   844 120
    cout << p.x << " " << p.y << endl;
    // cout << system("C:\\wangyy_music\\wyy_music_install\\CloudMusic\\cloudmusic.exe") << endl;

    while (true)
    {
        Sleep(1000);  //choose a task
        SetCursorPos(215, 405);
        mouse_event(/*MOUSEEVENTF_ABSOLUTE |*/ MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);

        Sleep(3000);  //put page down
        SetCursorPos(1360, 842);
        for (int i = 0; i < 4; i++)
        {
            Sleep(500);  
            mouse_event(/*MOUSEEVENTF_ABSOLUTE |*/ MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
        }

        Sleep(1000);  //next
        SetCursorPos(566, 814);
        mouse_event(/*MOUSEEVENTF_ABSOLUTE |*/ MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);

        Sleep(1500);  //back
        SetCursorPos(16, 48);
        mouse_event(/*MOUSEEVENTF_ABSOLUTE |*/ MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
        Sleep(2000);
        count++;
        cout << "The program has loop " << count << " times " << endl;
    }

    // mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
    // mouse_event(MOUSEEVENTF_MOVE , 0, 0, 0, 0);

    //the first ( 215,  405 )
    //the second ( 1360, 842 )
    //the third ( 566, 814 )
    //the forth ( 16, 48 );
    

    system("pause");
}