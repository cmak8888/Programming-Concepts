// Calvin Mak
//	Lab30A: Triangle Classification
// 
//
//
//	Classifies Triangles based on side lengths
//
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

bool cont() {																	// To loop without reiterating the program
	char character;
	cout << "Do you want to enter in new values? (Y/N)" << endl;
	cin >> character;
	if ((character == 'Y') || (character == 'y')) {
		return true;
	}
	else if ((character == 'N') || (character == 'n')) {
		system("Pause");
		return false;
	}
	else {
		cout << "Invalid input";
		cont();
	}
}
int main() {
	double a, b, c;
	cout << "Print 3 values: " << endl;
	cin >> a >> b >> c;
	if (a < 1 || b < 1 || c < 1 || !(a + b > c) || !(b + c > a) || !(a + c > b)) {
		cout << "Invalid Triangle" << endl;
		cout << "Not a Triangle" << endl;
		system("Pause");
		return 0;
	}
	
	if ((fabs(pow(a, 2) + pow(b, 2) - pow(c, 2)) <= 0.0001) || (fabs(pow(a, 2) + pow(c, 2) - pow(b, 2)) <= 0.0001) || (fabs(pow(c, 2) + pow(b, 2) - pow(a, 2)) <= 0.0001)) {
		cout << "This is a Right Triangle." << endl;
	} else if (((a == b) && a > c) || ((a == c) && (a > b)) || (b == c) && (b > a)) {
		cout << "This is an acute triangle." << endl;
		if (cont()) {
			main();
		}
		cout << "\n\n";
		return 0;
	}
	else if (((a == b) && (b == c)) || (pow(a, 2) + pow(b, 2) < pow(c, 2)) || (pow(a, 2) + pow(c, 2) < pow(b, 2)) || (pow(c, 2) + pow(b, 2) < pow(a, 2))) {
			cout << "This is an acute triangle." << endl;
	}
	else if ((pow(a, 2) + pow(b, 2) > pow(c, 2)) || (pow(a, 2) + pow(c, 2) > pow(b, 2)) || (pow(c, 2) + pow(b, 2) > pow(a, 2))) {
		cout << "This is an Obtuse triangle." << endl;
	}
	cout << endl;
	if (cont()) {
		main();
	} 
	cout << "\n\n";
	return 0;
}