#include "ElectricVehicle.h"

int main() {
    // initializing two ElectricVehicle objects with givenvalues
    ElectricVehicle ev1(12345, "Tesla", "Model 3", 75.0, 50.0);
    ElectricVehicle ev2(67890, "Nissan", "Leaf", 60.0, 30.0);
    std::cout << "Initial Vehicle Details:\n";
    ev1.displayVehicleDetails();
    ev2.displayVehicleDetails();

    ev1.charge(2);    // Charge ev1 for 2 hours
    ev1.drive(100);   // Drive ev1 for 100 miles
    ev1.displayVehicleDetails();

    ev2.charge(1.5);  // Charge ev2 for 1.5 hours
    ev2.drive(50);    // Drive ev2 for 50 miles
    ev2.displayVehicleDetails();

    return 0;
}
