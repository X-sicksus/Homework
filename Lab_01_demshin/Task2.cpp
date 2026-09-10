//Демшин
#include <iostream>
#include <cmath>
using namespace std;
int main(void) {

    setlocale(LC_ALL, "Russian");

int a = 3;
int b = 4;
int c = 5;

int per = a + b + c;
int pper = per / 2;

int podroot = pper * (pper - a) * (pper - b) * (pper - c);

int plo = sqrt(podroot);

cout << "Периметр" << "-" << per << endl;
cout << "Площадь"  << "-" <<plo << endl;
     
    return 0;
}
