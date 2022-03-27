#pragma once
#include <iostream>

class iElectronics   //� ������� �� ��������� ������ � ������ ���� ����� ������ �����������, � �� �����������, ����� �������� ���� �����-�� ������, ����� ��� ���� ���������
{
public:
    iElectronics() { std::cout << "Constructor iElectronics called: " << this << "\n"; }
    virtual void ShowSpec() = 0;
    virtual void TurnOn() = 0;
    virtual ~iElectronics() { std::cout << "Destructor iElectronics calle: " << this << "\n"; }
};