//Демшин
//Ввод библиотек и начало функции
#include <iostream>
using namespace std;
int main() {

    setlocale(LC_ALL, "Russian");   //Ввод кирилицы в функцию

double berry, sugar, water;         //Оглавление переменных

cout << "Количество литров" << "-"; //Вывод в терминале фразы "Количество литров -"
cin >> water;                       //Ввод количества воды 

berry = water / 3;                  //Инициализация переменной berry
sugar = water / 2;                  //Инициализация переменной sugar

//Вывод данных о количестве ингридиентов
cout << "Ягод" << "-" << berry << "kg" << endl;
cout << "Сахара" << "-" << sugar << "kg" << endl;
cout << "Воды" << "-" << water << "li" << endl;

    return 0;

}