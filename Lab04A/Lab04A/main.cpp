// Calvin Mak




//Triangle orgs


#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

string toClassify(double input1, double input2, double largest) {

	return;
}

int main() {
	double inputA = 0, inputB = 0, inputC = 0;
	double largest;
	char which;											//classifies the largest variable
	string classify;
	double perimeter, area;
	do {
		cout << "Give your triangle measurements";
	} while (inputA < 0 || inputB < 0 || inputC < 0);
	cout << "Woohoo - input is valid!";
	if (inputA > inputB && inputA > inputC) {
		largest = inputA;
		which = 'A';
	}
	else if (inputB < inputC && inputA < inputC) {
		largest = inputC;
		which = 'C';
	}
	else if (inputC < inputB && inputA < inputB) {
		largest = inputB;
		which = 'B';
	}
	if (which = 'A') {
		classify = toClassify(inputB, inputC, largest);
	}
	else if (which = 'B') {
		classify = toClassify(inputA, inputC, largest);
	}
	else if (which = 'C') {
		classify = toClassify(inputA, inputB, largest);
	}
	perimeter = inputA + inputB + inputC;



}