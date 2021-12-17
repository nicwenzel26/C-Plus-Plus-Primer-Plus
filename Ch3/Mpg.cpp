#include <iostream>

int main(void)
{
    double miles   = 0.0;
    double gallons = 0.0;

    std::cout << "How many miles did you drive? ";
    std::cin  >> miles;

    std::cout << "How many gallons did you use? ";
    std::cin  >> gallons;

    std::cout << "Your MPG is: " << (miles / gallons) << std::endl;
}