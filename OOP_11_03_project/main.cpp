#include <iostream>
#include <string>

#include "../OOP_11_03_library/leaver.h"

int main()
{
    std::cout << "Enter your name: ";
    std::string user_name;
    std::cin >> user_name;
    
    Leaver l1;
    std::cout << l1.leave(user_name);
    
    return 0;
}
