/* CSCI 261 A02: Triangles
* Author: Calvin Mak (_INSERT_YOUR_NAME_HERE_)
*
* Add more complete description here...
*/

#include <iostream>   // For cin, cout, etc.
#include <cstdlib>	  // For rand
#include <string>	  // For strings if necessary
#include <cmath>	  // For math functions
#include <ctime>	  // For accounting for time
#include <iomanip>	  // For input/output manipulatino

using namespace std;  // For standard namespace 

int main() {
	// PART I: INSERT YOUR CODE BELOW HERE
	double firstX, firstY, secX, secY, thirdX, thirdY, side1, side2, side3, perimeterTri, areaTri;
	srand(time(0));
	firstX = rand() % 21 - 10;
	firstY = rand() % 21 - 10;
	cout << "The first point is at (" << firstX << "," << right << firstY << ")" << endl;
	cout << "Enter the second coordinates: ";								//input second coords
	cin >> secX >> secY;
	cout << "Enter the third coordinates: ";								//input 3rd coords
	cin >> thirdX >> thirdY;


	// PART I INSERT YOUR CODE ABOVE HERE
	// PART II: INSERT YOUR CODE BELOW HERE
	/*                Distance formula is sqrt of X and Y distances squared         */	

	side1 = sqrt(pow((secX - firstX), 2) + pow((secY - firstY), 2));		// Finds first distance
	side2 = sqrt(pow((thirdX - secX), 2) + pow((thirdY - secY), 2));		// Finds second distance
	side3 = sqrt(pow((thirdX - firstX), 2) + pow((thirdY - firstY), 2));	// Finds first distance
	perimeterTri = side1 + side2 + side3;									// Perimeter is sum of each side
	areaTri = side1 * side2 / 2;											// Area of a triangle is one side times another side divided by 2

	// PART II INSERT YOUR CODE ABOVE HERE
	// PART III INSERT YOUR CODE BELOW HERE

	/*                               Printing the values                             */
	cout << "Sides of the triangles are: " << setw(35) << fixed << setprecision(2) << left << side1 << endl;
	cout << right << setw(33) << fixed << setprecision(2) << side2 << endl;
	cout << right << setw(33) << fixed << setprecision(2) << side3 << endl;
	cout << "Perimeter of the triangle is " << setprecision(2) << perimeterTri << endl;
	cout << "Area of the triangle is " << setprecision(2) << areaTri << endl;

	// PART III INSERT YOUR CODE ABOVE HERE
	system("pause");
	return 0; // signals the operating system that our program ended OK.rt
}