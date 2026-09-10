//Демшин
#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    setlocale(LC_ALL, "Russian");

double a = 0.45;
double b = 3.4;
double x, Q;

cout << "Введите x ->";
cin >> x;

Q = (13.6 * tan(x) + pow(x,3) * sin(x/2)) / (cos(pow(x, 2))) + pow(a, 2)* b - pow(2 * 2 - b, 3);
cout << "Ответ -> " << Q << endl;

    return 0;
}