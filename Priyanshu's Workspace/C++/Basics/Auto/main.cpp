#include <iostream>

int main()
{
    auto var1 {12}; // int
    auto var2 {13.0}; // double
    auto var3 {14.0f}; // float
    auto var4 {15.0L}; // long double
    auto var5 {'e'}; // char

    //int modifier suffixes.
    auto var6 {123u}; // unsigned
    auto var7 {123ul}; // unsigned long
    auto var8 {123ll}; // long long

    std::cout << "auto var1 {12}; => " << var1 << ", size: " << sizeof(var1) << std::endl;
    std::cout << "auto var2 {13.0}; => " << var2 << ", size: " << sizeof(var2) << std::endl;
    std::cout << "auto var3 {14.0f}; => " << var3 << ", size: " << sizeof(var3) << std::endl;
    std::cout << "auto var4 {15.0L}; => " << var4 << ", size: " << sizeof(var4) << std::endl;
    std::cout << "auto var5 {'e'}; => " << var5 << ", size: " << sizeof(var5) << std::endl;
    std::cout << "auto var6 {123u}; => " << var6 << ", size: " << sizeof(var6) << std::endl;
    std::cout << "auto var7 {123ul}; => " << var7 << ", size: " << sizeof(var7) << std::endl;
    std::cout << "auto var8 {123ll}; => " << var8 << ", size: " << sizeof(var8) << std::endl;

    return 0;
}
