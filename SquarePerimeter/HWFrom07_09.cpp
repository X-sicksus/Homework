#include <iostream>
#include <cstdlib>
int main(void)
    {
// ---------------- // обьявление переменных   
    int n; // Четырёхзначное число
    int tho; // тысячи
    int hun; // сотни
    int ten; // десятки
    int uni; // еденици 
    int john;
//------------------ввод переменной n
    std::cout << "Введите число \n";
    std::cin >> n;
//------------------вычисления
    tho = n / 1000;     // тысячи
    hun = (n/100)%10;   // сотни
    ten = (n/10)%10;    // десятки
    uni = n % 10;       // еденицы
//------------------вывод информации про переменные
    std::cout << ten << uni << tho << hun << std::endl;
    std::cin.get();
        
        std::cout << john;
        return 0;
}