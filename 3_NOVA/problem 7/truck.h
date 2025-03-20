#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

class Truck : public Vehicle {
private:
    double payloadCapacity;

public:
    Truck(int id, std::string make, std::string model, double capacity)
        : Vehicle(id, make, model), payloadCapacity(capacity) {}

    void displayDetails() const override {
        Vehicle::displayDetails();
        std::cout << ", Payload Capacity: " << payloadCapacity << " tons" << std::endl;
    }
};

#endif
