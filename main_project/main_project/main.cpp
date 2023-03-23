#include "math_lib/Calc.hpp"

#include <iostream>

// int main(int argc, char *argv[], char* envp[])
int main(int argc, char *argv[]) 
{
  Calc calc;

  std::cout<< "12+7 = " << calc.add(12,7) << "\n";
  return 0;
}
