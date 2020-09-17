#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    //1358, 841
    //386, 473

    int count{0};
    POINT p;
    Sleep(3000);

    GetCursorPos(&p); //1292 15     844 340   844 120
    cout << p.x << " " << p.y << endl;
    // cout << system("C:\\wangyy_music\\wyy_music_install\\CloudMusic\\cloudmusic.exe") << endl;

    while (true)
    {
        Sleep(3000); //choose a task
        SetCursorPos(570, 290);
        mouse_event(/*MOUSEEVENTF_ABSOLUTE |*/ MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);            Sleep(3000);

        for (int i = 0; i < 20; i++)
        {
            Sleep(3000); //choose a task
            SetCursorPos(570, 290);
            mouse_event(/*MOUSEEVENTF_ABSOLUTE |*/ MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);

            Sleep(3000);
            SetCursorPos(770, 290);
            mouse_event(/*MOUSEEVENTF_ABSOLUTE |*/ MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);

            count++;
            cout << "The program has loop " << count << " times " << endl;
            Sleep(1000 * 60);
        }
        Sleep(2000); //choose a task
        SetCursorPos(386, 473);
        mouse_event(/*MOUSEEVENTF_ABSOLUTE |*/ MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);

        Sleep(8000); //choose a task
        SetCursorPos(1358, 830);
        mouse_event(/*MOUSEEVENTF_ABSOLUTE |*/ MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);





    }
}