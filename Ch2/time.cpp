#include <iostream>

void formatTime(int hour, int min);

int main(void)
{
  int hour;
  int minutes;

  std::cout << "Enter the number of hours: ";
  std::cin >> hour;

  std::cout << "Enter the number of minutes: ";
  std::cin >> minutes;

  formatTime(hour, minutes);



  return 0;
}


void formatTime(int hour, int min)
{
  std::cout << "Time: " << hour << ":" << min << std::endl;
}
