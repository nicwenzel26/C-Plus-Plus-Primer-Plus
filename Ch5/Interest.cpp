#include <iostream>
#include <iomanip>

double simpleInterest(double balance, double original, double percentage);
double compoundInterest(double balance, double percentage);

int main(void)
{
    double originalInvestment   = 100.0;
    double daphneBalance        = originalInvestment;
    double cleoBalance          = originalInvestment;
    int year                    = 0;
    
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Year: " << year << std::endl;
    std::cout << "Daphne Balance: $" << daphneBalance << std::endl;
    std::cout << "Cleo Balance: $" << cleoBalance << std::endl;

    while (cleoBalance <= daphneBalance)
    {
        year += 1;
        daphneBalance = simpleInterest(daphneBalance, originalInvestment, 10);
        cleoBalance   = compoundInterest(cleoBalance, 5);

        std::cout << "Year: " << year << std::endl;
        std::cout << "Daphne Balance: $" << daphneBalance << std::endl;
        std::cout << "Cleo Balance: $" << cleoBalance << std::endl;
    }

    std::cout << "It took " << year << " years for Cleo to have a larger balance than Daphne." << std::endl;
}

double simpleInterest(double balance, double original, double percentage)
{
    balance += original * (percentage / 100.0);
    return balance;
}

double compoundInterest(double balance, double percentage)
{
    balance += balance * (percentage / 100.0);
    return balance;
}