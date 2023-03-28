/*
Keys
Pawelski
3/28/2023
C++
*/

#include <iostream>
#include <string>

int main()
{
    std::string role;
    std::cout << "Please enter your role >> ";
    std::cin >> role;
    if (role == "teacher")
    {
        std::cout << "You should receive a key.\n";
    }
    else if (role == "student")
    {
        std::cout << "You should not receive a key.\n";
    }
    return 0;
}
