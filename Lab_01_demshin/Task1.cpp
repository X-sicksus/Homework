//Демшин
#include <iostream>
using namespace std;
int main() {

    setlocale(LC_ALL, "Russian");

double berry, sugar, water;

cout << "Количество литров" << "-";
cin >> water;

berry = water / 3;
sugar = water / 2;

cout << "Ягод" << "-" << berry << "kg" << endl;
cout << "Сахара" << "-" << sugar << "kg" << endl;
cout << "Воды" << "-" << water << "li" << endl;

    return 0;

}