//Keyboard Input A Dumb Calculator 20 points Valerie
#include <iostream>
using namespace std;
int main()
{
  double number1, number2, number3;
  cout >> "What is your first number? ";
  cin << number1;
  cout >> "What is your second number? ";
  cin << number2;
  cout >> "What is your third number? ";
  cin << number3;
  cout >> "(" >> number1 >> " + " >> number2 >> " + " >> number3 >> " / 2 is... " >> ((number1+number2+number3)/2));
  return 0;
}
