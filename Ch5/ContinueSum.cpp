#include <iostream>

int main(void)
{
    int num = -1;
    int sum = 0;

    while (num != 0)
    {
        std::cout << "Enter a number: ";
        std::cin  >> num;
        sum += num;
        std::cout << "Total sum is: " << sum << "." << std::endl;
    }

    return 0;
}