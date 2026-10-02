#include <iostream>
#include <locale>
#include <windows.h>

using namespace std;
int main() 
{
    //SetConsoleOutputCP(CP_UTF8);
    //setlocale(LC_ALL, "Russian"); 

    int j = 0;

    while (j<6)
    {
        cout << "ддд = " << j << endl;
        j=j+1;
    }

}

// cmd /c chcp 65001>nul && C:\msys64\ucrt64\bin\g++.exe -fdiagnostics-color=always -g C:\Learning\OAP\CppProjects\Lab_01_demshin\Wheel.cpp -o C:\Learning\OAP\CppProjects\Lab_01_demshin\Wheel.exe