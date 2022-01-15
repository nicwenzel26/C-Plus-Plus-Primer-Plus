#include <iostream>
#include <array>
#include <string>

int main(void)
{
    std::array<std::string, 12> months = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    int sales[3][12];
    int monthSale  = 0;
    int totalSales = 0;
    int yearSales  = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            std::cout << "How many books did you sell in " << months[j] << " of year " << (i + 1) << "? ";
            std::cin  >> monthSale;
            sales[i][j] = monthSale;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        yearSales = 0;
        for (int j = 0; j < 12; j++)
        {
            yearSales += sales[i][j];
        }

        std::cout << "In year " << (i + 1) << " you sold " << yearSales << " books." << std::endl;
        totalSales += yearSales;
    }

    std::cout << "Over 3 years you sold: " << totalSales << " books." << std::endl;

    return 0;
}