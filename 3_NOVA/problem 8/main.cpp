#include "Battery.h"

int main() {
    // Creating battery objects
    Battery batt1(200, 80, 14.5, 30);
    Battery batt2;

    cout << "Initial Battery 1 Details:\n" << batt1 << endl;

    cout << "Charging Battery 1 :\n";
    ++batt1;
    cout << batt1 << endl;

    cout << "Discharging Battery 1 :\n";
    --batt1;
    cout << batt1 << endl;

    cout << "Enter details for Battery 2:\n";
    cin >> batt2;
    
    cout << "\nBattery 2 Details:\n" << batt2 << endl;

    cout << "Assigning Battery 1 to Battery 2 :\n";
    batt2 = batt1;
    cout << batt2 << endl;

    // Using subscript operator
    cout << "Modifying Battery 2 :\n";
    batt2[1] = 16.0;  // Update voltage
    cout << batt2 << endl;

    return 0;
}
