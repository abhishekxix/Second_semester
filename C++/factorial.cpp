#include <iostream>

int main()
{
    unsigned  int number {};
    std::cout << "Enter the number to find its factorial -> ";
    std::cin >> number;
    unsigned int temp {number};
    unsignedint factorial {1};
    if(number  == 0)
        factorial = 0;
    
    for(;temp > 0; temp--)
    {
        factorial *= temp;
    }
    std::cout << "The factorial of " << number << " = " << factorial << std::endl;
    
    return 0;
}
