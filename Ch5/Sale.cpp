#include <iostream>
#include <array>
#include <string>

int main(void)
{
    std::array<std::string, 12> months = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    int sales = 0;
    int saleMonth = 0;

    for (int i = 0; i < months.size(); i++)
    {
        std::cout << "Enter the number of books sold in " << months[i] << ": ";
        std::cin  >> saleMonth;
        sales += saleMonth;
    }

    std::cout << "You sold " << sales << " books this year." << std::endl;

    return 0; 

}