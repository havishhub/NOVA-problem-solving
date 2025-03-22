#ifndef TRANSPORT_H
#define TRANSPORT_H

#include <string>
using namespace std;

class Vehicle 
{
protected:
    string brand;
    string model;
    int year;

public:
    Vehicle(const string &brand, const string &model, int year);
    virtual void showDetails() const = 0;
    virtual ~Vehicle() = default;
};

class Car : public Vehicle 
{
public:
    Car(const string &brand, const string &model, int year);
    void showDetails() const override;
};

class Truck : public Vehicle 
{
private:
    double loadCapacity;

public:
    Truck(const string &brand, const string &model, int year, double capacity);
    void showDetails() const override;
};

class Electric 
{
protected:
    double batteryCapacity;
    double chargeLevel;

public:
    Electric(double capacity, double charge);
    virtual void showBatteryDetails() const = 0;
    virtual ~Electric() = default;
};

class ElectricCar : public Car, public Electric 
{
private:
    int maxRange;

public:
    ElectricCar(const string &brand, const string &model, int year, double capacity, double charge, int range);
    void showDetails() const override;
    void showBatteryDetails() const override;
};

class ElectricTruck : public Truck, public Electric 
{
private:
    int towingLimit;

public:
    ElectricTruck(const string &brand, const string &model, int year, double payload, double capacity, double charge, int towing);
    void showDetails() const override;
    void showBatteryDetails() const override;
};

#endif
