// Calvin Mak
/*
	Copyright 2017 Calvin Mak

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

*/
#include <iostream>

using namespace std;

int main() {
	const int SIZE = 15;
	int numbers[SIZE];
	int largest;
	cout << "Hey! Witness my first array mojo!" << endl;
	cout << "Enter 15 numbers and I will tell you what they are." << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << "Number " << i + 1 << ": ";
		cin >> numbers[i];
	}
	cout << "So awesome!" << endl;
	cout << "The numbers are: ";
	largest = numbers[0];
	for (int j = 0; j < SIZE; j++) {
		cout << numbers[j] << " ";
	}
	cout << "\nHave a nice day!" << endl;
	for (int k = 0; k < SIZE; k++) {
		if (largest < numbers[k]) {
			largest = numbers[k];
		}
	}
	cout << "The largest value in the array is: " << largest << endl;
	system("pause");
	return 0;
}