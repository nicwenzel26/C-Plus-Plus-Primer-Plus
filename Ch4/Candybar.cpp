#include <iostream>
#include <string>

struct CandyBar
{
    std::string brandName;
    float weight;
    int calories;
};

int main(void)
{
    // Declaring and intit an item of the CandyBar struct
    CandyBar snack = 
    {
        "Moon Bar", // Brand name
        2.3, // Weight in grams
        123 // Kilo-calories
    };

    std::cout << "Your snack is called: " << snack.brandName << std::endl;
    std::cout << "Your snack weighs " << snack.weight << " grams." << std::endl;
    std::cout << "Your snack contains " << snack.calories << " kilo-calories." << std::endl;

    return 0;
}