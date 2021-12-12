#include <iostream>

const int SECONDS_PER_MINUTE = 60;
const int MINUTES_PER_DEGREE = 60;  

int main(void)
{
    float degrees       = 0;
    float minutes       = 0;
    float seconds       = 0;
    float totalDegree = 0;

    std::cout << "Enter your latitudes degrees, minutes, and seconds (39 10 2):";
    std::cin  >> degrees;
    std::cin  >> minutes;
    std::cin  >> seconds;

    totalDegree = float(float(degrees) + float(minutes / MINUTES_PER_DEGREE) + float((seconds / (SECONDS_PER_MINUTE)) / MINUTES_PER_DEGREE));

    std::cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds: " << totalDegree << " degrees." << std::endl;

    return 0;
}