#include <iostream>

int main()
{
    int var1; //May initialize with a garbage value, depending on the compiler.
    
    //Braced Initialization:
    int var2 {}; // Initializes to 0.
    int var3 {10}; // Initializes to 10.
    int var4 {15}; // Initializes to 15.
    int var5 { var3 + var4 }; // Can use an expression as initializer.
    // int var6 {2.9}; // Error or warning

    //Functional Initialization:
    int var7 (5); // Initializes to 5.
    int var8 (10); // Initializes to 10.
    int var9 ( var7 + var8 ); // Can use an expression as initializer.
    int var10 (2.9); // Information lost (initializes to 2). less safe than braced initialization.

    //Assignment Initialization.
    int var11 = 2; // Initializes to 2.
    int var12 = 7; // Initializes to 7.
    int var13 =  var11 + var12; // Can use an expression as initializer.
    int var14 = 2.9; // Information lost (initializes to 2). less safe than braced initialization.

    std::cout << "Garbage Value Initializarion: " <<std::endl;
    std::cout << "int var1; => " << var1 <<std::endl;
    std::cout << "\nBraced Initializarion: " <<std::endl;
    std::cout << "int var2 {}; => " << var2 <<std::endl;
    std::cout << "int var3 {10}; => " << var3 <<std::endl;
    std::cout << "int var4 {15}; => " << var4 <<std::endl;
    std::cout << "var5 { var3 + var4 } => " << var5 <<std::endl;
    std::cerr << "int var6 {2.9}; => error: narrowing conversion of '2.8999999999999999e+0' from 'double' to 'int' [-Wnarrowing]" <<std::endl;
    std::cout << "\nFunctional Initializarion: " <<std::endl;
    std::cout << "int var7 (5); => " << var7 <<std::endl;
    std::cout << "int var8 (10); => " << var8 <<std::endl;
    std::cout << "int var9 ( var7 + var8 ); => " << var9 <<std::endl;
    std::cout << "int var10 (2.9); => " << var10 <<std::endl;
    std::cout << "int var11 = 2; => " << var11 <<std::endl;
    std::cout << "int var12 = 7; => " << var12 <<std::endl;
    std::cout << "int var13 =  var11 + var12; => " << var13 <<std::endl;
    std::cout << "int var14 = 2.9; => " << var14 <<std::endl;

    return 0;
}


