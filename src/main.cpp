#include "Fraction.h"
#include <iostream>

int main() {
  Fraction a;
  Fraction b(2, 10);
  std::cout << (a + b).getValue();
}