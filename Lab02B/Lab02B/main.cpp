//Calvin Mak and Davies Alongo

#include <iostream>										//For input and output
#include <cmath>										//Call math functions
#include <cstdlib>										//For using random number
#include <ctime>										//Keeps track of time


using namespace std;

int main() {
	int dieSize;
	cout << "How many sides does our die have? ";		//Get sides
	cin >> dieSize;										//Get die size
	srand(time(0));	
	for (int i = 0; i < 5; i++) {						//loop 5 times
		cout << endl << "The die has been cast to: ";
		cout << right << rand() % dieSize + 1;			// Generates random number between 1 and the DieSize
		cout << endl;
	}
	cout << endl;
	int storedRandomValue = rand();
	system("pause");
	return 0;
}