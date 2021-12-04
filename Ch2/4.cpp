#include <iostream>

int main(void)
{

  int age;

  std::cout << "What is your age? ";

  std::cin >> age;

  std::cout << "You are " << (age * 12) << " months old." << std::endl;

  return 0;
}
