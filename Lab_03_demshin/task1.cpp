#include <iostream>
#include <iomanip>   // setw() — выравнивание столбцов
#include <cstdlib>   // rand(), srand()
#include <ctime>     // time()
using namespace std;

const int SIZE = 10; // именованная константа для размера массива

int main() {
    //setlocale(LC_ALL, "Russian");
    srand(time(0)); // инициализация генератора случайных чисел

    int matrix[SIZE][SIZE];
    int n;

    // Ввод n с проверкой диапазона
    do {
        cout << "Введите размер n (2..10): ";
        cin >> n;
    } while (n < 2 || n > 10);

    // Заполнение матрицы случайными числами из [-20; 20]
    // rand() % 41 даёт 0..40, минус 20 -> -20..20
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            matrix[i][j] = rand() % 41 - 20;

    // Вывод исходной матрицы с выравниванием
    cout << "\nИсходная матрица:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << setw(5) << matrix[i][j];
        cout << endl;
    }

    // Отражение слева направо — столбцы в обратном порядке
    cout << "\nОтражённая слева направо:\n";
    for (int i = 0; i < n; i++) {
        for (int j = n - 1; j >= 0; j--) // идём с последнего столбца
            cout << setw(5) << matrix[i][j];
        cout << endl;
    }

    return 0;
}