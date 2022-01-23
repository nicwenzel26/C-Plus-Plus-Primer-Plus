#include <iostream>
#include <cctype>

int main(void)
{
    char character;

    while (character != '@')
    {
        std::cout << "Enter a character: ";
        std::cin  >> character;
        if (isdigit(character))
        {
            continue;
        }
        else if (isupper(character))
        {
            character = tolower(character);
        }
        else if (islower(character))
        {
            character = toupper(character);
        }
        
        std::cout << character << std::endl;

    }

    std::cout << "Exiting program" << std::endl;
}