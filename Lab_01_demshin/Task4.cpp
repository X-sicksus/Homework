#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    //setlocale(LC_ALL, "Russian"); //Ввод кириллицы

//Инициализация переменных
double a = 0.45;
double b = 3.4;
double x, BD, QB, GO;

cout << "Введите x -> "; //вывод фразы Введите x
cin >> x; //Ввод любого числа на место x


BD = 13.6 * tan(x) + pow(x, 3) * sin(x/2);
QB = cos(pow(x, 2)) + pow(a, 2)* b * (2 * a - b);
GO = BD / QB;
cout << "Ответ -> " << GO << endl;
    		
    return 0;
}
