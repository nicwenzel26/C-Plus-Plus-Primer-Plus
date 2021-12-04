#include <iostream>

double lightYeartoAu(double lightYears);

int main(void)
{
  double lightYears = 0;
  double au = 0;

  std::cout << "Enter a distance in light years: ";
  std::cin >> lightYears;

  au = lightYeartoAu(lightYears);

  std::cout << lightYears << " light years is " << au << " astronomical units." << std::endl;

  return 0;
}

double lightYeartoAu(double lightYears)
{
  return (lightYears * 63240.0);
}
