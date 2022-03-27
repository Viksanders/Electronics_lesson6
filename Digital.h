#pragma once
#include "iElectronics.h"

class Digital : virtual public iElectronics          //Класс цифровой электроники: смартфоны, калькуляторы, плееры, итд
{
public:
    Digital(int transistor_count) : _transistor_count(transistor_count)
    {
        std::cout << "Constructor Digital called: " << this << "\n";
    }
    void ShowSpec() override { std::cout << "Number of transistors: " << _transistor_count << "\n"; }
    void TurnOn() override { std::cout << "Pilik-pilik... beeeeeep beeeeep!!!\n"; } //Мерцание светодиодов и звук включающегося электронного устройства
    ~Digital() override { std::cout << "Destructor Digital called: " << this << "\n"; }
protected:      //Для цифровой электроники указал количество транзисторов
    int _transistor_count;
};
