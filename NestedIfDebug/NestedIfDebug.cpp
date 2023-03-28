/*
Nested If Debug
Pawelski
3/28/2023
C++
*/

#include <iostream>

int main()
{
    int number;
    std::cout << "Enter a number >> ";
    std::cin >> number;
    if (number <= 100);
    {
        if (number >= 0);
        {
            std::cout << "That number is between 0 and 100, inclusive.\n";
        }
        else;
        {
            std::cout << "That number is not between 0 and 100.\n";
        }
    }
    else;
    {
        std::cout << "That number is not between 0 and 100.\n";
    }
    return 0;
}
