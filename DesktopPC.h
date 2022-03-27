#pragma once
#include "Digital.h"

class DesktopPC final : public Digital
{
public:
    DesktopPC(int transistor_count, std::string manufacturer) : Digital(transistor_count), _manufacturer(manufacturer)
    {
        std::cout << "Constructor Desktop PC called: " << this << "\n";
    }
    void ShowSpec() override
    {
        std::cout << "Number of transistors: " << _transistor_count << " manufacturer: " << _manufacturer << "\n";
    }
    void Reboot() { std::cout << "PC is rebooted\n"; }  //Свой собственный метод данного класса, ниоткуда не унаследованный
    ~DesktopPC() override
    {
        std::cout << "Destructor Desktop PC called: " << this << "\n";
    }
private:
    std::string _manufacturer;
};
