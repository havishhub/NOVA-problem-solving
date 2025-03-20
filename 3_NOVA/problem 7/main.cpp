#include "Car.h"
#include "Truck.h"
#include "GlobalFunctions.h"

int main() {
    // Creating Car objects
    Car car1(101, "Tesla", "Model S", "Electric");
    Car car2(102, "Toyota", "Camry", "Petrol");

    // Creating Truck objects
    Truck truck1(201, "Ford", "F-150", 2.5);
    Truck truck2(202, "Volvo", "FH16", 5.0);
    Truck truck3(203, "Scania", "R500", 4.5);

    // Array of Vehicle pointers
    Vehicle* vehicles[] = { &car1, &car2, &truck1, &truck2, &truck3 };

    int size = sizeof(vehicles) / sizeof(vehicles[0]);

    // Display vehicle details
    displayVehicleDetails(vehicles, size);

    // Search for a vehicle
    int searchId;
    std::cout << "\nEnter vehicle ID to search: ";
    std::cin >> searchId;
    searchVehicleById(vehicles, size, searchId);

    return 0;
}
