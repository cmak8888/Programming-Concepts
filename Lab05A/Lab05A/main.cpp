// Calvin Mak

#include <iostream>

using namespace std;

int main() {
	const int SIZE = 15;
	int numbers[SIZE];
	cout << "Hey! Witness my first array mojo!" << endl;
	cout << "Enter 15 numbers and I will tell you what they are." << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << "Number " << i + 1 << ": ";
		cin >> numbers[i];
	}
	cout << "So awesome!" << endl;
	cout << "The numbers are: ";
	for (int j = 0; j < SIZE; j++) {
		cout << numbers[j] << " ";
	}
	cout << "\nHave a nice day!" << endl;
	system("pause");
	return 0;
}