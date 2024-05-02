#include <iostream>

int main()
{
    bool red_light {false}; // Size of booleans = 1 byte.
    bool green_light {true};

    if ( red_light == true )
    {
        std::cout << "Stop!" << std::endl;
    }
    else
    {
        std::cout << "Go through" << std::endl;
    }
    std::cout << "---------------------" << std::endl;

    //Printing out a bool.
    //1 = true
    //0 = false
    std::cout << "red light state: " << red_light << std::endl;
    std::cout << "green light state: " << green_light << std::endl;
    std::cout << "---------------------" << std::endl;
    
    std::cout << std::boolalpha; // Changes boolean value outputs from 0/1 to True/False. 

    std::cout << "red light state: " << red_light << std::endl;
    std::cout << "green light state: " << green_light << std::endl;
    
    return 0;
}
