#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

const int SIZE = 24;

int main() {
    setlocale(LC_ALL, "Russian");
    srand(time(0));

    int pulse[SIZE];

    // Заполнение [55; 130]
    // rand() % 76 даёт 0 от 75, плюс 55 -> от 55 до 130
    for (int i = 0; i < SIZE; i++)
        pulse[i] = rand() % 76 + 55;

    // Вывод всех измерений
    cout << "Показания пульса за сутки:\n";
    for (int i = 0; i < SIZE; i++)
        cout << "Час " << setw(2) << i << ": " << pulse[i] << " уд/мин\n";

    // Счётчики и экстремумы
    int normal = 0, high = 0;
    int minV = pulse[0], maxV = pulse[0]; // начальные значения

    for (int i = 0; i < SIZE; i++) {
        // От 60 до 100
        if (pulse[i] >= 60 && pulse[i] <= 100)
            normal++;
        // Выше 100
        if (pulse[i] > 100)
            high++;
        // Обновляем минимум и максимум
        if (pulse[i] < minV) minV = pulse[i];
        if (pulse[i] > maxV) maxV = pulse[i];
    }

    cout << "\nНормальных значений (60..100): " << normal << endl;
    cout << "Значений выше 100: " << high << endl;
    cout << "Минимум: " << minV << endl;
    cout << "Максимум: " << maxV << endl;

    return 0;
}