#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

const int SIZE = 6; // максимум для каждого измерения

int main() {
    setlocale(LC_ALL, "Russian");
    srand(time(0));

    int A[SIZE][SIZE], B[SIZE][SIZE], C[SIZE][SIZE];
    int m, k, p, q;

    // Ввод размеров матриц
    cout << "Введите m и k для A (1..6): ";
    cin >> m >> k;
    cout << "Введите p и q для B (1..6): ";
    cin >> p >> q;

    // Проверка условия умножения: столбцы A == строки B
    if (k != p) {
        cout << "Умножение невозможно: столбцов A (" << k << ") != строк B (" << p << ").\n";
        return 0; // завершаем программу
    }

    // Заполнение A случайными [1; 5]
    for (int i = 0; i < m; i++)
        for (int j = 0; j < k; j++)
            A[i][j] = rand() % 5 + 1;

    // Заполнение B случайными [1; 5]
    for (int i = 0; i < p; i++)
        for (int j = 0; j < q; j++)
            B[i][j] = rand() % 5 + 1;

    // Вычисление C = A * B
    for (int i = 0; i < m; i++)
        for (int j = 0; j < q; j++) {
            C[i][j] = 0; // обнуляем перед суммированием
            for (int t = 0; t < k; t++)
                C[i][j] += A[i][t] * B[t][j]; // скалярное произведение
        }

    // Вывод A
    cout << "\nМассив A:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < k; j++)
            cout << setw(5) << A[i][j];
        cout << endl;
    }

    // Вывод B
    cout << "\nМассив B:\n";
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++)
            cout << setw(5) << B[i][j];
        cout << endl;
    }

    // Вывод C
    cout << "\nМассив C = A * B:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++)
            cout << setw(6) << C[i][j];
        cout << endl;
    }

    // Поиск максимума и его позиции
    int mVal = C[0][0], maxI = 0, maxJ = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < q; j++)
            if (C[i][j] > mVal) {
                mVal = C[i][j];
                maxI = i; // запоминаем строку
                maxJ = j; // запоминаем столбец
            }

    cout << "\nМаксимум C[" << maxI << "][" << maxJ << "] = " << mVal << endl;

    return 0;
}