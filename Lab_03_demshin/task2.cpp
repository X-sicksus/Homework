#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

const int SIZE = 6; // максимальный размер массива

int main() {
    setlocale(LC_ALL, "Russian");
    srand(time(0));

    int matrix[SIZE][SIZE];
    int n;

    // Ввод n с проверкой
    do {
        cout << "Введите размер n (2..6): ";
        cin >> n;
    } while (n < 2 || n > 6);

    // Заполнение случайными числами из [1; 5]
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            matrix[i][j] = rand() % 5 + 1;

    // Вывод матрицы
    cout << "\nМатрица:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << setw(5) << matrix[i][j];
        cout << endl;
    }

    // Произведение элементов каждой строки
    cout << "\nПроизведение элементов каждой строки:\n";
    for (int i = 0; i < n; i++) {
        long long prod = 1; // начинаем с 1, а не с 0
        for (int j = 0; j < n; j++)
            prod *= matrix[i][j];
        cout << "Строка " << i + 1 << ": " << prod << endl;
    }

    return 0;
}