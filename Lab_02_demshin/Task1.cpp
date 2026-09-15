#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian"); // Чтобы русский текст нормально отображался

    int hour;
    double bP, fP;

    cout << "Введите час поездки (0-23): ";
    cin >> hour;
    cout << "Введите базовую стоимость поездки: ";
    cin >> bP;

    // Проверяем условие: ночное время или нет
    if (hour >= 23 || hour < 6) {
        fP = bP * 1.20; // Добавляем 20%
        cout << "Ночной тариф. Итоговая стоимость: " << fP << endl;
    } else {
        fP = bP; // Наценки нет
        cout << "Дневной тариф. Итоговая стоимость: " << fP << endl;
    }

    return 0;
}