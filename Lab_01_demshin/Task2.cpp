//Демшин
//Ввод библиотек и начало функции
#include <iostream>
#include <cmath>
using namespace std;
int main(void) {

    setlocale(LC_ALL, "Russian"); //Ввод кирилицы

//Инициализация переменных
int a = 3;
int b = 4;
int c = 5;

//Вычисления
int per = a + b + c;
int pper = per / 2;

int podroot = pper * (pper - a) * (pper - b) * (pper - c); //Вычисление формулы для подсчёта площади

int plo = sqrt(podroot); //Инициалиализация пременной отвечающей за площадь

//Вывод данных о площади и периметре
cout << "Периметр" << "-" << per << endl;
cout << "Площадь"  << "-" << plo << endl;
     
    return 0;
}
