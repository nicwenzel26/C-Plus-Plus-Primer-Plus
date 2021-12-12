#include <iostream>

const int   INCHES_PER_FOOT       = 12;
const float INCHES_PER_METER    = 39.37008; 
const float POUNDS_PER_KILOGRAM = 2.204;

int main(void)
{

    int feet     = 0;
    int inches   = 0;
    int lbs      = 0;
    float meters = 0;
    float kilos  = 0;
    float bmi    = 0;

    std::cout << "Enter your height in feet and inches (5 11): ";
    std::cin  >> feet;
    std::cin  >> inches;

    std::cout << "Enter your weight in pounds: ";
    std::cin  >> lbs; 

    inches = (feet * INCHES_PER_FOOT) + inches;
    meters = inches / INCHES_PER_METER;
    kilos  = lbs / POUNDS_PER_KILOGRAM;

    bmi    = kilos / (meters * meters);

    std::cout << "Your BMI is: " << bmi << "." << std::endl;

    return 0;
}