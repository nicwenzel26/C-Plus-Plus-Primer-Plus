#include <iostream>
#include <string>

struct PizzaCompany
{
    std::string name;
    int diameter; // Inches
    float weight;  // Pounds
};

int main(void)
{
    PizzaCompany newCompany;

    std::cout << "Enter the name of your pizza company: ";
    getline(std::cin, newCompany.name);

    std::cout << "Enter the diameter of your pizza: ";
    std::cin  >> newCompany.diameter;

    std::cout << "Enter the weight of your pizza in pounds: ";
    std::cin  >> newCompany.weight;

    std::cout << "Company Name: " << newCompany.name << std::endl;
    std::cout << "Pizza Diameter: " << newCompany.diameter << std::endl;
    std::cout << "Pizza Weight: " << newCompany.weight << std::endl;

    return 0;
}