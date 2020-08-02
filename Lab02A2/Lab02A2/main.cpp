// Calvin Mak and Davies Alongo
#include <iostream>
#include <cmath>
/* Using Ideal Gas Law
   and
   Newton's Law of Universal Gravitation */

using namespace std;

int main() {
    /*                                                Ideal Gas Law                                            */
    int numMoles;                                                                                               //initialize variables
    double pressure, temperature, volume;
    const double GAS = 0.08602;
    cout << "Enter the Temperature of the system in Kelvin: " << endl;                                          //receive inputs
    cin >> temperature;
    cout << "Enter in the Volume of the system in L: " << endl;
    cin >> volume;
    cout << "Enter in the number of moles: " << endl;
    cin >> numMoles;
    pressure = numMoles * temperature * GAS / volume;                                                           //Calculates pressuress
    cout << "With the given measurements, the calculated pressure is " << pressure << " atms" << endl;
    /*                                               Newton's Law of Universal Gravititation                    */
    double force, mass1, mass2, rDistance;                                                                      //initialize variables
    const float GRAVITATION_EARTH = 6.67408 * pow(10,-11);
    cout << "Enter in first mass: " << endl;                                                                    //gets inputs
    cin >> mass1;
    cout << "Enter in second mass: " << endl;
    cin >> mass2;
    cout << "Enter in distance between both centers of mass: " << endl;
    cin >> rDistance;
    force = mass1 * mass2 * GRAVITATION_EARTH / (pow(rDistance, 2));                                            //Calculates force
    cout << "The calculated force of the given values is " << force << " N * m." << endl;
    system("pause");
    return 0;
}
