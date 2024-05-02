//This  project template folder is meant to be duplicated to write new programs on.

#include <iostream>

int main()
{
    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    for ( auto i : arr ) //Range based loop.
    {
        std::cout << "value : " << i << std::endl;
    }
    return 0;
}