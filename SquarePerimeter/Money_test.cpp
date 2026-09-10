#include <iostream>
#include <cstdlib>
using namespace std;

int main(void)
{   //-------------//обьявление переменной
    
    int mon, john;
    //-------------//ввод и вывод
    cout << "Введите число -> ";
    cin >> mon;
    cin >> john;
    //-------------//вычисления
    cout << "5000: " << mon / 5000 << endl;
    mon = mon % 5000;
    
    cout << "1000: " << mon / 1000 << endl;
    mon = mon % 1000;
    
    cout << "500: " << mon / 500 << endl;
    mon = mon % 500;
    
    cout << "100: " << mon / 100 << endl;
    mon = mon % 100;
    
    cout << "50: " << mon / 50 << endl;
    cin.get();

    cout << john;
    return 0;
}