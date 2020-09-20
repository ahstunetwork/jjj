#include <iostream>
#include <windows.h>
#include <string>
#include <ctime>
#include <memory>

using namespace std;

int main(int argc, char **argv)
{
    shared_ptr<int> p = make_shared<int>(42);
    cout << *p << endl;

    system("pause"); 
}