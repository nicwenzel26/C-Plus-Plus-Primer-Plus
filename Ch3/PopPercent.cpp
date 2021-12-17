#include <iostream>

int main(void)
{
    long long worldPop = 0;
    long long USPop    = 0;
    double percent     = 0.0;

    std::cout << "Enter the world population: ";
    std::cin  >> worldPop;

    std::cout << "Enter the U.S. population: ";
    std::cin  >> USPop;

    percent = 100.0 * (double(USPop) / double(worldPop));

    std::cout << "The population of the U.S. is " << percent << " percent of the world population." << std::endl;

    return 0;
}