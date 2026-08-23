#include <iostream>

using namespace std;
using d = double;

int main()
{
    cout << "Type in everything in liters" <<endl;
    cout<< " " <<endl;
    
    d fuel;
    cout << "Fuel at the start: " <<endl;
    cin >> fuel;
    
    d fuelC;
    cout << "Fuel consumption per lap: " <<endl;
    cin >> fuelC;
    
    cout << " " << endl;
    
    int l = 1;
    for (;fuel >= 10;){
        cout << "Fuel after" << l << " lap: " << fuel <<endl;
        fuel -= fuelC;
        l += 1;
    }
}