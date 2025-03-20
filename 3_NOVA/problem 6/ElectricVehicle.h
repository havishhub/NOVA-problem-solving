#ifndef ELECTRICVEHICLE_H
#define ELECTRICVEHICLE_H

#include <iostream>
#include <string>

class ElectricVehicle {
private:
    int vehicleId;
    std::string make;
    std::string model;
    double batteryCapacity;
    double chargeLevel;

public:
    ElectricVehicle(int id, std::string carMake, std::string carModel, double capacity, double charge);
    void charge(double hours);
    void drive(double miles);
    void displayVehicleDetails() const;
};

#endif
