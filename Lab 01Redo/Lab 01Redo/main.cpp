/* CSCI 261 Lab 01A: I/O 101 (_GIVE_BRIEF_DESCRIPTION_HERE_)
*
* Author: Calvin Mak (_INSERT_YOUR_NAME_HERE_)
*
* More complete description here...
Investigating how output in C++
*/

// The include section adds extra definitions from the C++ standard library.
#include <iostream> // For cin, cout, etc.
#include <string>
// We will (most of the time) use the standard library namespace in our programs.
using namespace std;

// Define any constants or global variables below this comment.

// Must have a function named "main", which is the starting point of a C++ program.
int main() {

    /******** INSERT YOUR CODE BELOW HERE ********/
    string str, str2, str3;
    cout << "Hello world!" << endl; // print Hello world! to the screen
    // cin >> str;
    cout << "\nHow are you?" << endl;
    // cin >> str2;
    cout << "\n(I'm fine)" << endl << "Press . enter to close";
    // cin >> str3;
    /******** INSERT YOUR CODE ABOVE HERE ********/

    return 0; // signals the operating system that our program ended OK.
}