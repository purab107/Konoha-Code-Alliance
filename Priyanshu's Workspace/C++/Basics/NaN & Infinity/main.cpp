#include <iostream>

int main()
{
    double n0 { 5.6 };
    double n1 { -5.6 };
    double n2 {}; //Initializes to zero.
    double n3 {}; //Initializes to zero.

    //+Infinity.
    double result { n0/n2 };
    std::cout << n0 << " / " << n2 << " = " << result << std::endl;
    std::cout << result << " + " << n1 << " = " << result+n1 << std::endl;
    std::cout << "---------------------" << std::endl; 

    //-Infinity
    result =  n1/n2 ;
    std::cout << n1 << " / " << n2 << " = " << result << std::endl;
    std::cout << result << " + " << n1 << " = " << result+n1 << std::endl;
    
    //NaN (Not a Number).
    result = n2 / n3 ;
    std::cout << n2 << " / " << n3 << " = " << result << std::endl;
    return 0;
}


