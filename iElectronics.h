#pragma once
#include <iostream>

class iElectronics   //В отличии от материала модуля я сделал этот класс просто абстрактным, а не интерфейсом, чтобы задавать хоть какие-то данные, общие для всех устройств
{
public:
    iElectronics() { std::cout << "Constructor iElectronics called: " << this << "\n"; }
    virtual void ShowSpec() = 0;
    virtual void TurnOn() = 0;
    virtual ~iElectronics() { std::cout << "Destructor iElectronics calle: " << this << "\n"; }
};