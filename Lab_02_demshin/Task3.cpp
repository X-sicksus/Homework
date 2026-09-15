#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int month;

    cout << "Введите номер месяца (1-12): ";
    cin >> month;

    switch (month) {
        case 1:  cout << "Козерог" << endl; break;
        case 2:  cout << "Водолей" << endl; break;
        case 3:  cout << "Рыбы" << endl; break;
        case 4:  cout << "Овен" << endl; break;
        case 5:  cout << "Телец" << endl; break;
        case 6:  cout << "Близнецы" << endl; break;
        case 7:  cout << "Рак" << endl; break;
        case 8:  cout << "Лев" << endl; break;
        case 9:  cout << "Дева" << endl; break;
        case 10: cout << "Весы" << endl; break;
        case 11: cout << "Скорпион" << endl; break;
        case 12: cout << "Стрелец" << endl; break;
        default: cout << "Ошибка! Нужно ввести число от 1 до 12." << endl;
    }

    return 0;
}