#include <iostream>
using namespace std;

int main() {
    //setlocale(LC_ALL, "Russian");                   //Ввод кириллицы

    int moth;                                       //Оглавление переменной

    cout << "Введите номер месяца (1-12): ";        //Вывод фразы
    cin >> moth;                                    //Ввод номера месяца

    //Проверяет значение переменной и выполняет определённую часть
    switch (moth) {
        case 1:  cout << "Овен" << endl; break;
        case 2:  cout << "Телец" << endl; break;
        case 3:  cout << "Близнецы" << endl; break;
        case 4:  cout << "Рак" << endl; break;
        case 5:  cout << "Лев" << endl; break;
        case 6:  cout << "Дева" << endl; break;
        case 7:  cout << "Весы" << endl; break;
        case 8:  cout << "Скорпион" << endl; break;
        case 9:  cout << "Стрелец" << endl; break;
        case 10: cout << "Козерог" << endl; break;
        case 11: cout << "Водолей" << endl; break;
        case 12: cout << "Рыбы" << endl; break;
        default: cout << "Тебе что сказано было?" << endl; break;
    }

    return 0;
}