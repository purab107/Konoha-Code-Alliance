/*
signed int for both positive and negative numbers.
unsigned int for only positive numbers.
A float variable is 4 bytes long, while a double variable is 8 bytes long.
long is the same as long int.
long long >= 2 * long
*/
#include <iostream>


int main(){

    signed int value1 {10};
    signed int value2 {-300};

    std::cout << "signed int value1 {10}; => " << value1 << std::endl;
    std::cout << "signed int value2 {-300}; => " << value2 << std::endl;
    std::cout << "sizeof(value1) => " << sizeof(value1) << std::endl;
    std::cout << "sizeof(value2) => " << sizeof(value2) << std::endl;
    std::cout << "---------------------" << std::endl;

    unsigned int value3 {4};
    //unsigned int value4{-5}; // Compiler error.
    std::cout << "unsigned int value3 {4}; => " << value3 << std::endl;
    std::cout << "sizeof(value3) => " << sizeof(value3) << std::endl;

    //short and long
    short short_var {-32768} ; //  2 Bytes 
    short int short_int {455} ;  
    signed short signed_short {122}; 
    signed short int signed_short_int {-456}; 
    unsigned short int unsigned_short_int {456};
    std::cout << "---------------------" << std::endl;

    //signed and unsigned.
    int int_var {55} ; // 4 bytes
    signed signed_var {66};
    signed int signed_int {77};
    unsigned int unsigned_int{77};
    

    long long_var {88}; // 4 OR 8 Bytes depending on the compiler
    long int long_int {33};
    signed long signed_long {44};
    signed long int signed_long_int {44};
    unsigned long int unsigned_long_int{44};

    long long long_long {888};// 8 Bytes
    long long int long_long_int {999};
    signed long long signed_long_long {444};
    signed long long int signed_long_long_int{1234};
    unsigned long long int unsigned_long_long_int{1234};


    std::cout << "short short_var {-32768}; => " << short_var<<  " , size : "
    << sizeof (short) << " bytes" << std::endl;

    std::cout << "short int short_int {455} => " << short_int << " , size : "
    << sizeof (short int) << " bytes" << std::endl;

    std::cout << "signed short signed_short {122} => " << signed_short
    << " , size : " << sizeof (signed short) << " bytes" << std::endl;

    std::cout << "signed short int signed_short_int {-456} => " << signed_short_int
    <<  " , size : " << sizeof (signed short int) << " bytes" << std::endl;
    
    std::cout << "unsigned short int unsigned_short_int {456} => " << unsigned_short_int
    <<  " , size : " << sizeof (unsigned short int) << " bytes" << std::endl;
    
    std::cout << "---------------------" << std::endl;




    std::cout << "int int_var {55} => " << int_var <<" , size : "
        << sizeof (int) << " bytes" << std::endl;

    std::cout << "signed signed_var {66} => " << signed_var <<" , size : "
        << sizeof (signed) << " bytes" << std::endl;

    std::cout << "signed int signed_int {77} => " << signed_int <<" , size : "
        << sizeof (signed int) << " bytes" << std::endl;
        
    std::cout << "unsigned int unsigned_int{77} => " << unsigned_int <<" , size : "
        << sizeof (unsigned int) << " bytes" << std::endl;
        
    std::cout << "---------------------" << std::endl;


    std::cout << "long long_var {88} => " << long_var << " , size : "
        << sizeof (long) << " bytes" <<std::endl;

    std::cout << "long int long_int {33} => " << long_int <<" , size : "
        << sizeof (long int) << " bytes" << std::endl;

    std::cout << "signed long signed_long {44} => " << signed_long <<" , size : "
        << sizeof (signed long) << " bytes" << std::endl;

    std::cout << "signed long int signed_long_int {44} => " << signed_long_int <<" , size : "
        << sizeof (signed long int) << " bytes" << std::endl;
        
    std::cout << "unsigned long int unsigned_long_int{44} => " << unsigned_long_int <<" , size : "
        << sizeof (unsigned long int) << " bytes" << std::endl;
        
    std::cout << "---------------------" << std::endl;



    std::cout << "long long long_long {888} => " << long_long <<" , size : "
        << sizeof (long long) << " bytes" << std::endl;

    std::cout << "long long int long_long_int {999} => " << long_long_int <<" , size : "
        << sizeof (long long int) << " bytes" << std::endl;

    std::cout << "signed long long signed_long_long {444} => " << signed_long_long <<" , size : "
        << sizeof (signed long long) << " bytes" <<std::endl;
        
    std::cout << "signed long long int signed_long_long_int{1234} => " << signed_long_long_int <<" , size : "
        << sizeof (signed long long int) << " bytes" << std::endl;
        
    std::cout << "unsigned long long int unsigned_long_long_int{1234} => " << unsigned_long_long_int <<" , size : "
        << sizeof (unsigned long long int) << " bytes" << std::endl;
        
    std::cout << "---------------------" << std::endl; 
    return 0;
}