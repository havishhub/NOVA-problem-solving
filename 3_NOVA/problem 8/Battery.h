#ifndef BATTERY_H
#define BATTERY_H

#include <iostream>
using namespace std;

class Battery {
private:
    double capacity;
    double chargeLevel;
    double voltage;
    double temperature;

public:
    // Constructor
    Battery(double cap = 100, double chgLvl = 50, double volt = 12, double temp = 25);

    // Getter methods
    double getCapacity() const;
    double getChargeLevel() const;
    double getVoltage() const;
    double getTemperature() const;

    // Charge and Discharge
    void charge(double amount);
    void discharge(double amount);

    // Operator Overloading
    double& operator[](int index);      // Subscript operator []
    Battery& operator*();               // Dereference operator *
    Battery* operator->();              // Member access operator ->
    Battery& operator++();              // Pre-increment ++
    Battery& operator--();              // Pre-decrement --
    Battery& operator=(const Battery& other);  // Assignment operator =

    // Friend functions for I/O operators
    friend ostream& operator<<(ostream& out, const Battery& b);
    friend istream& operator>>(istream& in, Battery& b);
};

#endif
