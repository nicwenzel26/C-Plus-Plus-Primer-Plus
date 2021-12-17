#include <iostream>

const int HOURS_PER_DAY      = 24;
const int MINUTES_PER_HOUR   = 60;
const int SECONDS_PER_MINUTE = 60;

int main(void)
{
    long long secondsInput = 0;
    int days               = 0;
    int hours              = 0;
    int minutes            = 0;
    int seconds            = 0;

    std::cout << "Enter the number of seconds: ";
    std::cin >> secondsInput;

    days = secondsInput / (SECONDS_PER_MINUTE * MINUTES_PER_HOUR * HOURS_PER_DAY);
    secondsInput = secondsInput % (SECONDS_PER_MINUTE * MINUTES_PER_HOUR * HOURS_PER_DAY);

    hours = secondsInput / (SECONDS_PER_MINUTE * MINUTES_PER_HOUR);
    secondsInput = secondsInput % (SECONDS_PER_MINUTE * MINUTES_PER_HOUR);

    minutes = secondsInput / SECONDS_PER_MINUTE;
    seconds = secondsInput % SECONDS_PER_MINUTE;

    std::cout << "Days: " << days << " Hours: " << hours << " Minutes: " << minutes << " Seconds: " << seconds << std::endl;
    

    return 0;
}