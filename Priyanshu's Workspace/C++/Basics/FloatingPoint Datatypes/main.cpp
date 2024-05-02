#include <iostream>
#include <iomanip> //iomanip is a library in C++ that is used to manage input and output formatting.

int main()
{
    //Declaration and initialization of floating point numbers.
    float n1 {1.12345678901234567890f}; // Suffix 'f' at end to assign float datatype.
    double n2 {1.12345678901234567890}; // No suffix required for double. Default floating point datatype in C++.
    long double n3 {1.123456789012345678901234567890L}; // Suffix 'L' at end to assign long double datatype.

    //Printing sizes of these datatypes.
    std::cout << "size of float : " << sizeof(n1) << " bytes " << std::endl;
    std::cout << "size of double : " << sizeof(n2) << " bytes " << std::endl;
    std::cout << "size of long double : " << sizeof(n3) << " bytes " << std::endl;
    std::cout << "---------------------" << std::endl; 

    //Precision (Number of digits including before and after decimal in a floating point variable).
    std::cout << std::setprecision(20); //Control the precision of std::cout.
    std::cout << "float       : " << n1 << std::endl; // Precision : 7 (prints garbage values after 7 digits). 
    std::cout << "double      : " << n2 << std::endl; // Precision : 17 (prints garbage values after 17 digits). 
    std::cout << "long double : " << n3 << std::endl; // Precision : >17 (always more tha double).
    std::cout << "---------------------" << std::endl; 

    //Float problems : the precision is too limited
    //for a lot of applications.
    float n4 = 123456.7890f;
    std::cout << "float n4 = 123456.7890f => " << n4 << std::endl; // Error : Narrowing conversion.
    std::cout << "---------------------" << std::endl; 

    //Scientific Notation for floating point numbers.
    std::cout << std::setprecision(11); //Control the precision of std::cout.
    double n5 {0.00000023657};
    double n6 {2.3657e-7}; // e-7 = *10^-7.
    std::cout << std::fixed; // Force cout to print floating point variables in fixed format. Default output is scientific notation.
    std::cout << "double n5 {0.00000023657}; => "<< n5 << std::endl;    
    std::cout << "double n6 {2.3657e-7};     => "<< n6 << std::endl;
    
    //use " std::cout.unsetf( std::ios::scientific | std::ios::fixed ); " to set the output back to default.

    return 0;
}