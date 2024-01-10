#include <iostream>

// Base classes
class Vehicle
{
public:
    void display()
    {
        std::cout << "This is a vehicle.\n";
    }
};

class Racing
{
public:
    void display()
    {
        std::cout << "This is for racing.\n";
    }
};

// Multilevel inheritance
class Car : public Vehicle
{
public:
    void display()
    {
        std::cout << "This is a car.\n";
    }
};

// Hybrid inheritance using multiple and multilevel inheritance
class SportsCar : public Car, public Racing
{
public:
    void display()
    {
        std::cout << "This is a sports car, combining the features of both a car and a racing vehicle.\n";
    }
};

int main()
{
    SportsCar sportsCar;
    sportsCar.display(); // Output: This is a sports car, combining the features of both a car and a racing vehicle.

    return 0;
}
