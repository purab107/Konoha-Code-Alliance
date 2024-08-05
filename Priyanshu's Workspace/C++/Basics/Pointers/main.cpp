#include <iostream>

int main()
{
    //Declaring pointers. Braced initializtion initializes the pointer to 'nullptr'.
    //All other initialization methods pnly declare the pointer.
    int * p_num {}; //Can only store the address of an int type variable.
    double * p_doub {nullptr}; //Can only store the address of an double type variable.
    //'nullptr' just specifies that the pointer is empty i.e. it has no address stored.

    /*
    Placement of '*' doesn't matter. 
    All these declarations of pointers are valid and work the same:
    int*  p_num {};
    int * p_num {};
    int  *p_num {};
    */

    //All pointer variables have the same size.
    std::cout << "Size of int pointer: " << sizeof(p_num) << std::endl;
    std::cout << "Size of double pointer: " << sizeof(p_doub) << std::endl;
    std::cout << "-----------------------------" << std::endl;

    //Assigning data to a pointer.
    //Pointers store memory addresses of variables.
    int int_var {44};
    int* p_int_var {&int_var}; // 'Address of' operator (&).
    std::cout << "int_var: " << int_var << std::endl;
    std::cout << "p_int_var (Address of int_var in memory): " << p_int_var << std::endl;
    //You can overwrite the value at a memory address using a pointer
    *p_int_var = 144;
    std::cout << "int_var(overwritten using pointer): " << int_var << std::endl;
    std::cout << "p_int_var (Address stays the same): " << p_int_var << std::endl;
    std::cout << "-----------------------------" << std::endl;

    //You can reassign the pointers address of a new variable as long as its the correct datatype.
    int int_var2 {63};
    p_int_var = &int_var2; //reusing the pointer from previous int.
    std::cout << "int_var2: " << int_var2 << std::endl;
    std::cout << "p_int_var2 (Address of int_var2 in memory): " << p_int_var << std::endl;
    std::cout << "-----------------------------" << std::endl;

    //Dereferencing a pointer.
    std::cout << "int_var2: " << int_var2 << std::endl;
    std::cout << "*p_int_var2 (Value of int_var2 through dereferencing): " << *p_int_var << std::endl;
    std::cout << "-----------------------------" << std::endl;

    //Declaring pointers for char.
    char char_var {'s'};
    char* p_char_var {&char_var};
    std::cout << "char_var: " << char_var << std::endl;
    std::cout << "p_char_var: " << p_char_var << std::endl;
    std::cout << "-----------------------------" << std::endl;
    // ^^ Works as expected nothing special to see.
    //But...
    
    //Initializing with string literals(C-string):
    const char * p_message {"Hello Worlld!"};
    /*
    "Hello world" will be turned into a character arary ('H','e','l','l','o',' ','W','o','r','l','d','\0').
    *p_message is going to point to the first charactter in this character array.
    The reason we use const char instead of char is because the character array is a const char array 
    i.e. all elements in the character array are const char datype. 
    therefore something like "char * p_message {"Hello Worlld!"};" will give complie time error.  
    */
    std::cout << "p_message: " << p_message << std::endl;
    std::cout << "Dereferencing p_message: " << *p_message << std::endl;
    /*
    Modifying this character array is not possible as it it a const character array.
    so trying something like:
    *p_message = 'B'; expected output: "Bello World" 
    will give compile time error.
    If you want to create a mutable character array just use:
    char message[] {"Hello World!"};
    */

    return 0;
}
