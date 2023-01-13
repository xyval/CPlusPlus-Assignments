// Basics and Printing Number And Math 7 points Valerie

#include <iostream>

int main() {
  std::cout << "I will now count my chickens:\n";
  std::cout << "Hens " << 25 + 30 / 6 << "\n";
  std::cout << "Roosters " << (100 - 25 * 3 % 4) << "\n";
  std::cout << "Now I will count the eggs:\n";
  std::cout << 3 + 2 + 1 - 5 + 4 % 2 - 1 / 4 + 6 << "\n";
  std::cout << "Is it true that 3 + 2 < 5 - 7? \n";
  std::cout << ((3 + 2) < (5 - 7)) << "\n";
  std::cout << "What is 3 + 2? " << (3 + 2) << "\n";
  std::cout << "What is 5 - 7? " << (5 - 7) << "\n";
  std::cout << "Oh, that's why it's false.\n";
  std::cout << "How about some more.\n";
  std::cout << "Is it greater? " << (5 > -2) << "\n";
  std::cout << "Is it greater or equal? " << (5 >= -2) << "\n";
  std::cout << "Is it less or equal? " << (5 <= -2) << "\n";
  return 0;
}
