#pragma once
#include "iElectronics.h"

class Appliances : virtual public iElectronics       //Класс бытовой техники: печки, стиральные машины, кондиционеры, итд
{
public:
    Appliances(int power_consumption) : _power_consumption(power_consumption)
    {
        std::cout << "Constructor Appliences called: " << this << "\n";
    }
    void ShowSpec() override { std::cout << "Power consumprion: " << _power_consumption << "\n"; }
    void TurnOn() override { std::cout << "Wrrrrrrrr!!!!\n"; }  //Звук запуска высокомощного агрегата
    ~Appliances() override { std::cout << "Destructor Appliences called: " << this << "\n"; }
protected:         //Бытовая техника в дополнение к свойства электроники имеет ещё потребляемую мощность
    int _power_consumption;
};