#include <iostream>
using namespace std;

double area_circle(int radius) {
	return 3.1415926 * radius * radius;
}

int area_rectangle(int length, int width) {
	return length * width;
}

int area_square(int side) {
	return side * side;
}

double area_triangle(int base, int height) {
	return 0.5 * base * height;
}
int main() {
	int choice;
	int info1 = 0, info2 = 0;
	cout << "Area Calculator\n\n";
	do {
		cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n\n";
		cout << "menu: \n"
			"1. circle\n"
			"2. rectangle\n"
			"3. square\n"
			"4. triangle\n"
			" > ";
		cin >> choice;
		switch (choice) {
		case 1:
			cout << "radius: ";
			cin >> info1;
			cout << "area: " << area_circle(info1) << endl;
			break;
		case 2: 
			cout << "width: ";
			cin >> info1;
			cout << "length: ";
			cin >> info2;
			cout << "area: " << area_rectangle(info1,info2) << endl;
			break;
		case 3: 
			cout << "side: ";
			cin >> info1;
			cout << "area: " << area_square(info1) << endl;
			break;
		case 4:
			cout << "base: ";
			cin >> info1;
			cout << "height: ";
			cin >> info2;
			cout << "area: " << area_triangle(info1,info2) << endl;
			break;
		default:
			cout << "quitted. Bye.";
			break; 
		}
	} while (choice > 0 && choice < 5);
}
