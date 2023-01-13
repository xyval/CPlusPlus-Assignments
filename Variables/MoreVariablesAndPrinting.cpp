//Variables	More Variables and Printing	7 points Valerie 
#include <iostream>
using namespace std;
/*
1. Change all the variables so there isn't the my in front. Make sure you change the name everywhere, not just where you used = to set them.
2. Try to write some variables that convert the inches and pounds to centimeters and kilos. Don't just type in the measurements, but work out the math inside your Java program.
*/
int main() {
      string Name, Eyes, Teeth, Hair;
      int Age, Height, Weight;

      Name = "Zed A. Shaw";
      Age = 35;     // not a lie
      Height = 74;  // inches
      Weight = 180; // lbs
      Eyes = "Blue";
      Teeth = "White";
      Hair = "Brown";
      double height_cm = Height*2.54;
      double weight_kg = Weight*0.45359237;

      cout << "Let's talk about " << Name << ".\n";
      cout << "He's " << Height << " inches (or " << height_cm << " cm) tall.\n";
      cout << "He's " << Weight << " pounds (or " << weight_kg << " kg) heavy.\n";
      cout << "Actually, that's not too heavy.\n";
      cout << "He's got " << Eyes << " eyes and " << Hair << " hair.\n";
      cout << "His teeth are usually " << Teeth << " depending on the coffee.\n";

      // This line is tricky; try to get it exactly right.
      cout << "If I add " << Age << ", " << Height << ", and " << Weight << " I get " << (Age + Height + Weight) << ".\n";
      return 0;
  }
