#include <iostream>

int combinedSum(int x, int y);

int main(void)
{
    int num1 = 0;
    int num2 = 0;

    std::cout << "Enter the first number: ";
    std::cin  >> num1;

    std::cout << "Enter the second number: ";
    std::cin  >> num2;

    int sum  = combinedSum(num1, num2);

    std::cout << "The combined sum of the two numbers is: " << sum << ". " << std::endl;

    return 0;

}

int combinedSum(int x, int y)
{
    int sum = 0;
    
    for(int i = x; i <= y; i++)
    {
        sum += i;
    }

    return sum;
}