#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string>

class Vehicle {
protected:
    int vehicleId;
    std::string make;
    std::string model;

public:
    Vehicle(int id, std::string make, std::string model)
        : vehicleId(id), make(make), model(model) {}

    virtual void displayDetails() const {
        std::cout << "Vehicle ID: " << vehicleId << ", Make: " << make << ", Model: " << model;
    }

    int getVehicleId() const { return vehicleId; }

    virtual double getPrice() const { return 0.0; } 

    virtual ~Vehicle() {} // Virtual destructor for polymorphism
};

#endif
