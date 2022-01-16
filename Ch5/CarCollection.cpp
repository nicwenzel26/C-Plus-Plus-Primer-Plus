#include <iostream>
#include <string>

struct Car
{
    std::string make;
    int year;
};

int main(void)
{
    int numCars = 0;
    std::string make = "";
    int year = 0;

    std::cout << "Enter the number of cars in your collection: ";
    std::cin  >> numCars;
    std::cin.get();

    Car *cars = new Car[numCars];

    for (int i = 0; i < numCars; i++)
    {
        std::cout << "Car #" << (i + 1) << std::endl;

        std::cout << "Enter the make of car #" << (i + 1) << ": ";
        getline(std::cin, make);

        cars[i].make = make;

        std::cout << "Enter the year of car #" << (i + 1) << ": ";
        std::cin  >> year;
        std::cin.get();
        cars[i].year = year; 
    }

    std::cout << "Here is your collection:" << std::endl;
    for (int i = 0; i < numCars; i++)
    {
        std::cout << cars[i].year << " " << cars[i].make << std::endl;
    }

    delete[] cars;
}