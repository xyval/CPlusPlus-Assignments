//Keyboard Input BMI Calculator 15-28 points Valerie
#include <iostream>
using namespace std;
  int main ()
	{
        int HeightFeet, HeightInches, weight;
        double height;
        cout << "Your height (feet only): ";
        cin >> HeightFeet;
        cout << "Your height (inches, not including the feets): ";
        cin >> HeightInches;
        cout << "Your weight (pounds): ";
        cin >> weight;
        height = ((HeightFeet*12 + HeightInches)*2.54)/100; 
        cout << "Your BMI is " << (((weight*0.453592)/height)/height);
        return 0;
    }
}
