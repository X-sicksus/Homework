#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    double price;

    cout << "Введите стоимость билета: ";
    cin >> price;

    if (price <= 15000) {
        cout << "Класс обслуживания: эконом" << endl;
    } 
    else if (price <= 30000) { // Сюда попадут числа от 15000 до 30000
        cout << "Класс обслуживания: комфорт" << endl;
    } 
    else if (price <= 60000) { // Сюда попадут числа от 30000 до 60000
        cout << "Класс обслуживания: бизнес" << endl;
    } 
    else { // Если больше 60000
        cout << "Класс обслуживания: первый класс" << endl;
    }

    return 0;
}