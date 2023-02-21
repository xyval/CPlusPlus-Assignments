#include <iostream>
using namespace std;

void credits() {
	cout << "\nprogrammed by Graham Mitchell\n";
	cout << "modified by [your name here]\n";
	cout << "This code is distributed under the terms of the standard ";
	cout << "BSD license.  Do with it as you wish.\n";
}

char randchar() {
	int numval;
	char charval;
	srand(time(0));
	// pick a random number from 0 to 25
	numval = (int)(rand() % 26);
	// now add that offset to the value of the letter 'A'
	charval = (char)('A' + numval);
	return charval;
}

void counter(int start,int stop) {
	int ctr;
	ctr = start;
	while (ctr <= stop) {
		cout << ctr << " ";
		ctr = ctr + 1;
	}
}

int abso(int n) {
	int absval;

	if (n < 0)
		absval = -n;
	else
		absval = n;

	return absval;
}

int main() {
	cout << "watch as we demonstrate functions.\n\n";
	cout << "I'm going to get a random character from A-Z\n";
	char c = randchar();
	cout << "The character is: " << c << "\n\n";
	cout << "Now let's count from -10 to 10\n";
	int begin, end;
	begin = -10;
	end = 10;
	counter(begin,end);
	cout << "how was that?\n\n";
	cout << "now we take the absolute value of a number.\n";
	int x, y;
	x = -10;
	y = abso(x);
	cout << "|" << x << "| = " << y << "\n\n";
	cout << "That\'s all. This program has been brought to you by:\n";
	credits();
}
