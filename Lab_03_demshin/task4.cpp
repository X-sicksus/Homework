#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int SIZE = 12; // именованная константа

int main() {
    setlocale(LC_ALL, "Russian");
    srand(time(0));

    int arr[SIZE];

    // Заполнение [-20; 20]
    for (int i = 0; i < SIZE; i++)
        arr[i] = rand() % 41 - 20;

    // Вывод массива
    cout << "Массив: ";
    for (int i = 0; i < SIZE; i++)
        cout << arr[i] << " ";
    cout << endl;

    // Сумма элементов
    int sum = 0;
    for (int i = 0; i < SIZE; i++)
        sum += arr[i];

    // Среднее арифметическое 
    double avg = (double)sum / SIZE;

    // Подсчёт элементов больше среднего
    int count = 0;
    for (int i = 0; i < SIZE; i++)
        if (arr[i] > avg)
            count++;

    cout << "Среднее арифметическое: " << avg << endl;
    cout << "Элементов больше среднего: " << count << endl;

    return 0;
}