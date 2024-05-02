#include <iostream>

int main()
{
    char c1 {'A'}; // Standard initialization and declaration for characters in C++.
    char c2 {65}; // ASCII character code for the alphabet 'a'.

    //Printing characters.
    std::cout << "character c1: " << c1 << std::endl;
    std::cout << "character c2: " << c2 << std::endl;

    std::cout << "character c2(int): " << static_cast<int>(c2) << std::endl; //Printing ASCII value of c2.

    return 0;
}
