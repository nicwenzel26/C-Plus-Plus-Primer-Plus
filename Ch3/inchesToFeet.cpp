#include <iostream>

const int INCHES_PER_FOOT = 12;

int main(void)
{
    int inches          = 0;
    int feet            = 0;
    int remainingInches = 0; 
    

    std::cout << "Enter your height in inches: ";
    std::cin >> inches;

    feet            = int(inches / INCHES_PER_FOOT);
    remainingInches = inches % INCHES_PER_FOOT;

    std::cout << "You are " << feet << " foot and " << remainingInches << " inches." << std::endl;

}