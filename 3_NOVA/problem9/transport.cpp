#include "transport.h"
#include <iostream>
using namespace std;

Vehicle::Vehicle(const string &brand, const string &model, int year) : brand(brand), model(model), year(year) {}

Car::Car(const string &brand, const string &model, int year) : Vehicle(brand, model, year) {}

void Car::showDetails() const 
{
    cout << "Car Brand: " << brand << ", Model: " << model << ", Year: " << year << endl;
}

Truck::Truck(const string &brand, const string &model, int year, double capacity)
    : Vehicle(brand, model, year), loadCapacity(capacity) {}

void Truck::showDetails() const {
    cout << "Truck Brand: " << brand << ", Model: " << model << ", Year: " << year << ", Load Capacity: " << loadCapacity << " tons" << endl;
}

Electric::Electric(double capacity, double charge) : batteryCapacity(capacity), chargeLevel(charge) {}

ElectricCar::ElectricCar(const string &brand, const string &model, int year, double capacity, double charge, int range)
    : Car(brand, model, year), Electric(capacity, charge), maxRange(range) {}

void ElectricCar::showDetails() const 
{
    Car::showDetails();
    cout << "Range: " << maxRange << " km" << endl;
}

void ElectricCar::showBatteryDetails() const {
    cout << "Battery Capacity: " << batteryCapacity << " kWh, Charge Level: " << chargeLevel << "%" << endl;
}

ElectricTruck::ElectricTruck(const string &brand, const string &model, int year, double payload, double capacity, double charge, int towing)
    : Truck(brand, model, year, payload), Electric(capacity, charge), towingLimit(towing) {}

void ElectricTruck::showDetails() const {
    Truck::showDetails();
    cout << "Towing Capacity: " << towingLimit << " kg" << endl;
}

void ElectricTruck::showBatteryDetails() const {
    cout << "Battery Capacity: " << batteryCapacity << " kWh, Charge Level: " << chargeLevel << "%" << endl;
}
