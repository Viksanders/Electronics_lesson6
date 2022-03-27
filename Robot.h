#pragma once
#include "Appliances.h"
#include "Digital.h"

class Robot final : public Appliances, Digital  //Класс для ромбовидного наследования
{
public:
    Robot(int power_consumption, int transistor_count, int battery) : Appliances(power_consumption), Digital(transistor_count), _battery(battery)
    {
        std::cout << "Constructor Robot called: " << this << "\n";
    }
    void ShowSpec() override
    {
        std::cout << "Number of transistors: " << _transistor_count << " power consumption: " << _power_consumption << " battery life: " << _battery << "\n";
    }
    void TurnOn() override { std::cout << "Hello World!\n"; }
    ~Robot()
    {
        std::cout << "Destructor Robot called: " << this << "\n";
    }
private:
    int _battery;
};
