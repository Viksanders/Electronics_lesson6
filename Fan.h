#pragma once
#include "Appliances.h"

class Fan final : public Appliances     //Класс вентилятор
{
public:
    Fan(int power_consumption, int RPM) : Appliances(power_consumption), _RPM(RPM)
    {
        std::cout << "Constructor Fan called: " << this << "\n";
    }
    void ShowSpec() override
    {
        std::cout << "Power consumprion: " << _power_consumption << " revolutions per minute: " << _RPM << "\n";
    }
    ~Fan() override
    {
        std::cout << "Destructor Fan called: " << this << "\n";
    }
private:
    int _RPM;   //обороты в минуту
};
