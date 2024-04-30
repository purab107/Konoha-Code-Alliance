//Testing C++20 compilers.

#include <iostream>

int main()
{
    auto result = (10 <=> 20) > 0;
    std::cout << result << std::endl;
}

/*
    Output:
    0
    C++20 is configured correctly
*/