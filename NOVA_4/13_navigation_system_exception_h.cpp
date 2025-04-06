#include <iostream>
#include <string>
using namespace std;

struct RouteParameters {
    string trafficCondition;
    string roadCondition;
    string vehicleCapability;

    void display() const {
        cout << "Traffic: " << trafficCondition << ", "
             << "Road: " << roadCondition << ", "
             << "Capability: " << vehicleCapability << endl;
    }
};

template <typename VehicleType>
class RoutePlanner {
private:
    VehicleType vehicle;
    RouteParameters params;

public:
    RoutePlanner(VehicleType v, RouteParameters rp)
        : vehicle(v), params(rp) {}

    void planRoute() const {
        cout << "Planning route for: " << vehicle.getType() << endl;
        cout << "Route Parameters: ";
        params.display();
        cout << "Recommended Route: " << vehicle.getRouteSuggestion(params) << "\n\n";
    }
};

class Car {
public:
    string getType() const { return "Car"; }

    string getRouteSuggestion(const RouteParameters& params) const {
        if (params.trafficCondition == "Heavy")
            return "Use alternate route through suburbs.";
        return "Use highway for faster travel.";
    }
};

class Truck {
public:
    string getType() const { return "Truck"; }

    string getRouteSuggestion(const RouteParameters& params) const {
        if (params.roadCondition == "Narrow")
            return "Avoid narrow roads. Take industrial route.";
        return "Follow main truck route.";
    }
};

class Motorcycle {
public:
    string getType() const { return "Motorcycle"; }

    string getRouteSuggestion(const RouteParameters& params) const {
        if (params.vehicleCapability == "High Performance")
            return "Use scenic hilly roads.";
        return "Take city routes avoiding highways.";
    }
};

int main() {
    RouteParameters carParams = {"Moderate", "Good", "Standard"};
    RouteParameters truckParams = {"Light", "Narrow", "Heavy Load"};
    RouteParameters bikeParams = {"Low", "Twisty", "High Performance"};

    Car car;
    Truck truck;
    Motorcycle motorcycle;

    RoutePlanner<Car> carPlanner(car, carParams);
    RoutePlanner<Truck> truckPlanner(truck, truckParams);
    RoutePlanner<Motorcycle> bikePlanner(motorcycle, bikeParams);

    carPlanner.planRoute();
    truckPlanner.planRoute();
    bikePlanner.planRoute();

    return 0;
}
