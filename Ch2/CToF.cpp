#include <iostream>

double cToF(double celcius);

int main(void)
{
  double c = 0;
  double f = 0;

  std::cout << "Please enter a Celcius value: ";
  std::cin >> c;
  f = cToF(c);

  std::cout << c << " degrees Celcius is " << f << " degrees Fahrenheit." << std::endl;


  return 0;
}

double cToF(double celcius)
{
  return ((1.8 * celcius) + 32.0);
}
