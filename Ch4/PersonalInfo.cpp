#include <iostream>
#include <string>

int main(void)
{
    std::string name;
    std::string surname;
    char grade;
    int age;

    std::cout << "What is your first name? ";
    getline(std::cin, name);

    std::cout << "What is your last name? ";
    std::cin  >> surname;

    std::cout << "What letter grade do you deserve? ";
    std::cin  >> grade;
    grade += 1;

    std::cout << "What is your age? ";
    std::cin  >> age;

    std::cout << "Name: " << surname << ", " << name << std::endl;
    std::cout << "Grade: " << grade << std::endl;
    std::cout << "Age: " << age << std::endl;

    return 0; 
}