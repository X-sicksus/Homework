//Демшин
//Ввод библиотек и начало функции
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
        int main() {
        
        setlocale(LC_ALL, "Russian"); //Ввод кирилицы
        
        double n = 10000;     // начальная сумма
        int t = 5;            // срок
        double p = 10;        //ставка
    
        //------------//коэфицент увеличения
        double coef = 1 + (p / 100);

        //------------// вычисление итоговой суммы
        double mny = n* pow(coef, t);
        
        //------------//Вывод данных о коэфиценте и финальной сумме денег 
        cout << "Коифицент ->" << coef << endl; 
        cout << "Деньги ->" << mny << endl;
        
        return 0;

}



