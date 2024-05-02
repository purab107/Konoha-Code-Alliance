//Octal nummber system an acceptable format in C++20.

#include <iostream>

int main()
{
    int no0 = 15 ; //Decimal
    int no1 = 017 ; //Octal 
    int no2 = 0x0f ; //Hexadecimal
    int no3 = 0b00001111 ; //Binary - added in C++14

    std::cout <<  "15   (Decimal)      : " << no0 << std::endl ;
    std::cout <<  "017  (Octal)        : " << no1 << std::endl ;
    std::cout <<  "0x0f (Hexadecimal)  : " << no2 << std::endl ;
    std::cout <<  "0b00001111 (Binary) : " << no3 << std::endl ;
    return 0;
}
