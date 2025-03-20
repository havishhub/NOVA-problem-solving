#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
private:
    std::string engineType;

public:
    Car(int id, std::string make, std::string model, std::string engineType)
        : Vehicle(id, make, model), engineType(engineType) {}

    void displayDetails() const override {
        Vehicle::displayDetails();
        std::cout << ", Engine Type: " << engineType << std::endl;
    }
};

#endif
