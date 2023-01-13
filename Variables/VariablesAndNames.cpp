//Variables	Variables and Names 7 points Valerie
#include <iostream>
using namespace std;
/*
1. I used 4.0 for space_in_a_car, but is that necessary? What happens if it's just 4?
      It's not because that variable is a double 
2. Remember that 4.0 is a "floating point" number. Find out what that means.
      A floating point number, is a whole number with a decimal point. 
3. Write comments above each of the variable assignments.
4. Make sure you know what = is called (equals) and that it's making names for things. 
5. Remember _ is an underscore character.
*/
int main () {
    //set the variables' type to int
		int cars, drivers, passengers, cars_not_driven, cars_driven;
		//set the variables' type to double 
		double space_in_a_car, carpool_capacity, average_passengers_per_car;
		//set cars to 100 
		cars = 100;
		//set space_in_a_car to 4.0 
		space_in_a_car = 4.0;
		//set drivers to 30
		drivers = 30;
		//set pessengers to 90
		passengers = 90;
		//set cars_not_driven to (cars - drivers) = 100-30 = 70 
		cars_not_driven = cars - drivers;
		//set cars_driven to (drivers) = 30
		cars_driven = drivers;
		//set carpool_capacity to (cars_driven * space_in_a_car) = 30*4.0 = 7.5
		carpool_capacity = cars_driven * space_in_a_car;
		//set average_passengers_per_car to (passengers / cars_driven) = 3
		average_passengers_per_car = passengers / cars_driven;


		cout << "There are " << cars << " cars available.\n";
		cout << "There are only " << drivers << " drivers available.\n";
		cout << "There will be " << cars_not_driven << " empty cars today.\n";
		cout << "We can transport " << carpool_capacity << " people today.\n";
		cout << "We need to put about " << average_passengers_per_car << " in each car.\n";
	  return 0;
}
