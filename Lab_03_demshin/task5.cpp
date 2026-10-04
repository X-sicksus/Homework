#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int SIZE = 16; // размер массива

int main() {
    setlocale(LC_ALL, "Russian");
    srand(time(0));

    int arr[SIZE];

    // Заполнение [-50; 50]
    for (int i = 0; i < SIZE; i++)
        arr[i] = rand() % 101 - 50;

    cout << "Исходный массив: ";
    for (int i = 0; i < SIZE; i++)
        cout << arr[i] << " ";
    cout << endl;

    int k;
    cout << "Введите k (>= 0): ";
    cin >> k;

    k = k % SIZE; // если k больше размера — берём остаток

    // Сдвиг влево: элемент на позиции i 
    int temp[SIZE];
    for (int i = 0; i < SIZE; i++)
        temp[i] = arr[(i + k) % SIZE];

    // Копируем обратно
    for (int i = 0; i < SIZE; i++)
        arr[i] = temp[i];

    cout << "После сдвига влево на " << k << ": ";
    for (int i = 0; i < SIZE; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}