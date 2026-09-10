//Демшин
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
        int main() {
        
        setlocale(LC_ALL, "Russian");
        
        double n = 10000;     // начальная сумма
        int t = 5;     // срок
        double p = 10;  //ставка
    
        //------------//коэфицент увеличения
        double coef = 1 + (p / 100);

        //------------// вычисление итоговой суммы
        double mny = n* pow(coef, t);

        cout << "Коифицент ->" << coef << endl;
    
        cout << "Деньги ->" << mny << endl;
        return 0;

}



