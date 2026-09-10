#include <iostream>
using namespace std;
int main()
{
    //-----------------//обьявление переменных
    const float factor = 2.54;   // 1 дюйм = 2.54 cm
    float x, in, cm;            // дюймы и сантиметры
    char ch = 0;
    //-----------------//вывод фразы 
    cout <<"введите длинну:";
    //-----------------//ввод переменных
    cin >> x;
    cin >> ch;
    //-----------------//вычисления
    switch(ch){
    case 'i':
        in = x;
        cm = x*factor;
        break;
    case 'c':
        in = x/factor;
        cm = x;
        break;
    default:
        in = cm = 0;
        break;
    }
    cout << in << "дюймов =" << cm << "cm\n";
}