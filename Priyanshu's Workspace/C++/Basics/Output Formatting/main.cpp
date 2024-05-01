#include <iostream>
#include <iomanip>
#include <ios>

int main()
{
    //Using std::setw() to set width of each output.
    
    std::cout << "Unformatted Table:" << std::endl;
    std::cout << "First name" << " " << "Last name" << " " << "Language" <<std::endl;
    std::cout << "Priyanshu" << " " << "Sahu" << " " << "C++" <<std::endl;
    std::cout << "Purab" << " " << "Sahare" << " " << "HTML" <<std::endl;
    std::cout << "Pankaj" << " " << "Diwan" << " " << "C++" <<std::endl;
    std::cout << "Altamash" << " " << "Naem" << " " << "Java" <<std::endl;
    std::cout << "Alwyn" << " " << "Ekka" << " " << "C" <<std::endl;
    std::cout << "----------------------------" << std::endl;

    std::cout << "Formatted Table:" << std::endl;
    int wid {10};
    std::cout << std::setw(wid) << "First name" << std::setw(wid) << "Last name" << std::setw(wid) << "Language" <<std::endl;
    std::cout << std::setw(wid) << "Priyanshu" << std::setw(wid) << "Sahu" << std::setw(wid) << "C++" <<std::endl;
    std::cout << std::setw(wid) << "Purab" << std::setw(wid) << "Sahare" << std::setw(wid) << "HTML" <<std::endl;
    std::cout << std::setw(wid) << "Pankaj" << std::setw(wid) << "Diwan" << std::setw(wid) << "C++" <<std::endl;
    std::cout << std::setw(wid) << "Altamash" << std::setw(wid) << "Naem" << std::setw(wid) << "Java" <<std::endl;
    std::cout << std::setw(wid) << "Alwyn" << std::setw(wid) << "Ekka" << std::setw(wid) << "C" <<std::endl;
    std::cout << "----------------------------" << std::endl;

    //Justification.
    std::cout << std:: right; // Sets right justification for cout (default).
    std::cout << "Right Justification:" << std::endl;
    std::cout << std::setw(wid) << "First name" << std::setw(wid) << "Last name" << std::setw(wid) << "Language" <<std::endl;
    std::cout << std::setw(wid) << "Priyanshu" << std::setw(wid) << "Sahu" << std::setw(wid) << "C++" <<std::endl;
    std::cout << std::setw(wid) << "Purab" << std::setw(wid) << "Sahare" << std::setw(wid) << "HTML" <<std::endl;
    std::cout << std::setw(wid) << "Pankaj" << std::setw(wid) << "Diwan" << std::setw(wid) << "C++" <<std::endl;
    std::cout << std::setw(wid) << "Altamash" << std::setw(wid) << "Naem" << std::setw(wid) << "Java" <<std::endl;
    std::cout << std::setw(wid) << "Alwyn" << std::setw(wid) << "Ekka" << std::setw(wid) << "C" <<std::endl;
    std::cout << "----------------------------" << std::endl;

    std::cout << std:: left; // Sets right justification for cout.
    std::cout << "Left Justification:" << std::endl;
    std::cout << std::setw(wid) << "First name" << std::setw(wid) << "Last name" << std::setw(wid) << "Language" <<std::endl;
    std::cout << std::setw(wid) << "Priyanshu" << std::setw(wid) << "Sahu" << std::setw(wid) << "C++" <<std::endl;
    std::cout << std::setw(wid) << "Purab" << std::setw(wid) << "Sahare" << std::setw(wid) << "HTML" <<std::endl;
    std::cout << std::setw(wid) << "Pankaj" << std::setw(wid) << "Diwan" << std::setw(wid) << "C++" <<std::endl;
    std::cout << std::setw(wid) << "Altamash" << std::setw(wid) << "Naem" << std::setw(wid) << "Java" <<std::endl;
    std::cout << std::setw(wid) << "Alwyn" << std::setw(wid) << "Ekka" << std::setw(wid) << "C" <<std::endl;
    std::cout << "----------------------------" << std::endl;
    
    //Internal justification  
    std::cout << std::internal; // Sets internal justification for cout (aligns the number to right and signs to left).
    std::cout << std::showpos; // Shows positive sign for positive values. Use std::noshowpos to revert it back.
    std::cout << "Internal Justification:" << std::endl;
    std::cout << std::setw(wid)  << "Age" << std::setw(wid) << "First name" << std::setw(wid) << "Last name" << std::setw(wid) << "Language" << std::endl;
    std::cout << std::setw(wid)  << 20  << std::setw(wid) << "Priyanshu" << std::setw(wid) << "Sahu" << std::setw(wid) << "C++" << std::endl;
    std::cout << std::setw(wid)  << 19  << std::setw(wid) << "Purab" << std::setw(wid) << "Sahare" << std::setw(wid) << "HTML" << std::endl;
    std::cout << std::setw(wid)  << 19  << std::setw(wid) << "Pankaj" << std::setw(wid) << "Diwan" << std::setw(wid) << "C++" << std::endl;
    std::cout << std::setw(wid)  << 19  << std::setw(wid) << "Altamash" << std::setw(wid) << "Naem" << std::setw(wid) << "Java" << std::endl;
    std::cout << std::setw(wid)  << 19  << std::setw(wid) << "Alwyn" << std::setw(wid) << "Ekka" << std::setw(wid) << "C" << std::endl;
    std::cout << "----------------------------" << std::endl;
    
    //std::setfil used to spcify a fill character for emptu space left after using set width.
    std::cout << "Fill character(_):" << std::endl;
    std::cout << std::setfill('_');
    std::cout << std::setw(wid) << "First name" << std::setw(wid) << "Last name" << std::setw(wid) << "Language" <<std::endl;
    std::cout << std::setw(wid) << "Priyanshu" << std::setw(wid) << "Sahu" << std::setw(wid) << "C++" <<std::endl;
    std::cout << std::setw(wid) << "Purab" << std::setw(wid) << "Sahare" << std::setw(wid) << "HTML" <<std::endl;
    std::cout << std::setw(wid) << "Pankaj" << std::setw(wid) << "Diwan" << std::setw(wid) << "C++" <<std::endl;
    std::cout << std::setw(wid) << "Altamash" << std::setw(wid) << "Naem" << std::setw(wid) << "Java" <<std::endl;
    std::cout << std::setw(wid) << "Alwyn" << std::setw(wid) << "Ekka" << std::setw(wid) << "C" <<std::endl;
    std::cout << "----------------------------" << std::endl;
    
    //Outputting diferent number systems.
    std::cout << std::noshowpos; 
    auto num {-314};
    std::cout << "num(dec) = " << std::dec << num << std::endl; // Doesn't work for floating point numbers.
    std::cout << "num(hex) = " << std::hex << num << std::endl; // Doesn't work for floating point numbers.
    std::cout << "num(oct) = " << std::oct << num << std::endl; // Doesn't work for floating point numbers.
    std::cout << "----------------------------" << std::endl;

    //showpoint and noshowpoint
    auto flt {3.140000f};
    std::cout << std::showpoint; //Default
    std::cout << "flt {3.140000f} (showpoint) => " << flt << std::endl;
    std::cout << std::noshowpoint; //Gets rid of trailing zeros afte the decimal.
    std::cout << "flt {3.140000f} (noshowpoint) => " <<  flt << std::endl;
    
    return 0;
}
