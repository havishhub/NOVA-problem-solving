#include "GlobalFunctions.h"
#include <iostream>

// Function to display all vehicles
void displayVehicleDetails(Vehicle* vehicles[], int size) {
    std::cout << "\nVehicle Details:\n";
    for (int i = 0; i < size; ++i) {
        vehicles[i]->displayDetails();
    }
}

// Function to search for a vehicle by ID
void searchVehicleById(Vehicle* vehicles[], int size, int id) {
    for (int i = 0; i < size; ++i) {
        if (vehicles[i]->getVehicleId() == id) {
            std::cout << "Vehicle Found: ";
            vehicles[i]->displayDetails();
            return;
        }
    }
    std::cout << "Vehicle with ID " << id << " not found.\n";
}
