#include <iostream>
int main() {
    
    int num1,num2;
    std::cin >> num1 >> num2;
    
    int per;
    per = num1 * 2 + num2 * 2;
    std::cout << per << std::endl;
    
    int plo;
    plo = num1 * num2;
    std::cout << plo << std::endl;  
    
    return 0;
}
