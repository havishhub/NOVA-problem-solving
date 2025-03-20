#include "Battery.h"

// Constructor
Battery::Battery(double cap, double chgLvl, double volt, double temp)
    : capacity(cap), chargeLevel(chgLvl), voltage(volt), temperature(temp) {}

// Getters
double Battery::getCapacity() const { return capacity; }
double Battery::getChargeLevel() const { return chargeLevel; }
double Battery::getVoltage() const { return voltage; }
double Battery::getTemperature() const { return temperature; }

// Charge and Discharge functions
void Battery::charge(double amount) {
    chargeLevel += amount;
    if (chargeLevel > capacity) chargeLevel = capacity; // Prevent overcharging
}
void Battery::discharge(double amount) {
    chargeLevel -= amount;
    if (chargeLevel < 0) chargeLevel = 0; // Prevent deep discharge
}

// Operator Overloading
double& Battery::operator[](int index) {
    if (index == 0) return chargeLevel;
    else if (index == 1) return voltage;
    else if (index == 2) return temperature;
    else throw out_of_range("Invalid index for Battery parameters.");
}

// Dereference operator *
Battery& Battery::operator*() {
    return *this;
}

// Member access operator ->
Battery* Battery::operator->() {
    return this;
}

// Pre-increment operator ++
Battery& Battery::operator++() {
    charge(5.0); // Increment charge level
    return *this;
}

// Pre-decrement operator --
Battery& Battery::operator--() {
    discharge(5.0); // Decrement charge level
    return *this;
}

// Assignment operator =
Battery& Battery::operator=(const Battery& other) {
    if (this != &other) { // Avoid self-assignment
        capacity = other.capacity;
        chargeLevel = other.chargeLevel;
        voltage = other.voltage;
        temperature = other.temperature;
    }
    return *this;
}

// Overloaded << (Output stream)
ostream& operator<<(ostream& out, const Battery& b) {
    out << "Battery Details:\n";
    out << "Capacity: " << b.capacity << " Ah\n";
    out << "Charge Level: " << b.chargeLevel << " Ah\n";
    out << "Voltage: " << b.voltage << " V\n";
    out << "Temperature: " << b.temperature << "°C\n";
    return out;
}

// Overloaded >> (Input stream)
istream& operator>>(istream& in, Battery& b) {
    cout << "Enter Capacity (Ah): ";
    in >> b.capacity;
    cout << "Enter Charge Level (Ah): ";
    in >> b.chargeLevel;
    cout << "Enter Voltage (V): ";
    in >> b.voltage;
    cout << "Enter Temperature (°C): ";
    in >> b.temperature;
    return in;
}
