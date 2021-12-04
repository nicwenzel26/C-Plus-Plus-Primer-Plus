#include <iostream>

void tbm(void);
void shtr(void);

int main(void)
{

  tbm();
  tbm();
  shtr();
  shtr();


  return 0;
}

void tbm(void)
{
  std::cout << "Three blind mice." << std::endl;
}

void shtr(void)
{
  std::cout << "See how they run." << std::endl;
}
