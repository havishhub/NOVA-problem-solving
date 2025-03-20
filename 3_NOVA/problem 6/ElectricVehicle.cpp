#include "ElectricVehicle.h"

ElectricVehicle::ElectricVehicle(int id, std::string carMake, std::string carModel, double capacity, double charge)
    : vehicleId(id), make(carMake), model(carModel), batteryCapacity(capacity), chargeLevel(charge) {}

void ElectricVehicle::charge(double hours) {
    double chargeIncrease = hours * 10.0;
    chargeLevel += chargeIncrease;
    if (chargeLevel > batteryCapacity) chargeLevel = batteryCapacity; // Prevent overcharging
    std::cout << make << " " << model << " charged for " << hours << " hours. New charge level: " << chargeLevel << "%\n";
}

void ElectricVehicle::drive(double miles) {
    double chargeUsed = miles * 0.5;
    if (chargeLevel >= chargeUsed) {
        chargeLevel -= chargeUsed;
        std::cout << make << " " << model << " driven for " << miles << " miles. Remaining charge: " << chargeLevel << "%\n";
    } else {
        std::cout << make << " " << model << " doesn't have enough charge to drive " << miles << " miles.\n";
    }
}

void ElectricVehicle::displayVehicleDetails() const {
    std::cout << "\nVehicle ID: " << vehicleId
              << "\nMake: " << make
              << "\nModel: " << model
              << "\nBattery Capacity: " << batteryCapacity << "%"
              << "\nCharge Level: " << chargeLevel << "%\n\n";
}
