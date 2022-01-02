#include <iostream>

int NAME_LENGTH = 20;

int main(void)
{
    std::string name     = "";
    std::string surname  = "";
    std::string fullName = "";

    std::cout << "Enter your first name: ";
    getline(std::cin, name);

    std::cout << "Enter your last name: ";
    getline(std::cin, surname);

    fullName = surname + ", " + name;

    std::cout << "Your name is: " << fullName << "." << std::endl;

}