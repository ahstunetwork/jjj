#include <iostream>
#include <windows.h>
#include<conio.h>
#include <winable.h>
#include <stdio.h>
#pragma comment( linker, "/subsystem:windows /entry:mainCRTStartup" )
#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0)
using namespace std;
int i=0;
int s=20;
int ud=0;
void *do_thread(void *arg)
{
        while (1)
        {
        if(KEY_DOWN(VK_NUMPAD0))
        {
        i=0;
                Sleep(100);
                cout<<i;
        }
        if(KEY_DOWN(VK_NUMPAD1))
        {
                i=1;
                Sleep(100);
                cout<<i;
        }
    if(KEY_DOWN('W'))
    {
            ud=1;
            Sleep(100);
            cout<<ud;
        }
        if(KEY_DOWN('S'))
        {
                ud=-3;
                Sleep(100);
                cout<<ud;
        }
        if(KEY_DOWN(VK_ADD) && s!=0)
        {
                s--;
                Sleep(100);
                cout<<s;
        }
        if(KEY_DOWN(VK_SUBTRACT))
        {
            s++;
            Sleep(100);
            cout<<s;
        }
    }
}
int main()
{
        int p;
        //创建线程的id号
        pthread_t    tid ;  //创建线程计时
        int ret ;
        //创建一条线程
        ret = pthread_create(&tid , NULL ,         do_thread , NULL);
        if(ret != 0)
        {
                fprintf(stderr , "创建线程失败!\n");
                return -1 ;
        }
        //当线程结束时自动释放id号
        ret = pthread_detach(tid);
        while (1)
        {
            while (i==1)
            {
                    mouse_event(MOUSEEVENTF_WHEEL,0,0,ud,0);
                    Sleep(s);
            }
    }
        return 0;
}

