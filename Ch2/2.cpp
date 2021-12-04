#include <iostream>

int main(void)
{

  int distance;

  std::cout << "Distance in furlongs: ";
  std::cin >> distance;

  std::cout << "Distance in Yards: " << (distance * 220) << std::endl;

  return 0;
}
