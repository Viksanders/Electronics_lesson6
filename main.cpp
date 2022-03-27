#include <iostream>
#include "iElectronics.h"
#include "Appliances.h"
#include "Digital.h"
#include "Fan.h"
#include "DesktopPC.h"
#include "Robot.h"

class Base
{
public:
    Base() { std::cout << "Base default constructor " << this << "\n"; }
    Base(int data1) : _someData_1(data1) { std::cout << "Base extended constructor " << this << "\n";  }
    virtual void ShowData() = 0;
    virtual ~Base() { std::cout << "Base destructor " << this << "\n"; }
protected:
    int _someData_1 = 0;
};

class A : virtual public Base
{
public:
    A(int data1, int data2) : Base(data1), _data_2(data2) { std::cout << "A constructor " << this << "\n"; }
    void SetData(int data) { _someData_1 = data; }
    void ShowData() override { std::cout << _someData_1 << "   " << _data_2 << "\n"; }
    ~A() { std::cout << "A destructor " << this << "\n"; }
protected:
    int _data_2;
};

class B : virtual public Base
{
public:
    B(int data1, int data3) : Base(data1), _data_3(data3) { std::cout << "B constructor " << this << "\n"; }
    void SetData(int data) { _someData_1 = data; }
    void ShowData() override { std::cout << _someData_1 << "   " << _data_3 << "\n"; }
    ~B() { std::cout << "B destructor " << this << "\n"; }
protected:
    int _data_3;
};

class C final : public A, B
{
public:
    //C(int data1, int data2, int data3, int data4) {_someData_1 = data1; _data_2 = data2; _data_3 = data3; _data_4 = data4;  }
    C(int data1, int data2, int data3, int data4) : A(data1, data2), B(data1, data3), _data_4(data4) { std::cout << "C constructor" << this << "\n";  }
    void ShowData() override { std::cout << _someData_1 << "   " << _data_2 << "     " << _data_3 << "    " << _data_4 << "\n"; }
    ~C() { std::cout << "C destructor " << this << "\n"; }
protected:
    int _data_4;
};


int main()
{

    C test(1, 2, 3, 4);
    test.ShowData();

    /*
    setlocale(LC_ALL, "");  //Большую часть этого ДЗ делал с другого ПК, т.е. не на визуал студии, там не стал заморачиваться с кодировками    
                            //Так что не обессудьте за инглиш

    //*         //Основное задание здесь
    const int size = 5;
    iElectronics* market[size];
    market[0] = new Robot(999, 23425, 100);
    market[1] = new Fan(500, 3000);
    market[2] = new DesktopPC(100000000, "INTEL");
    market[3] = new Digital(2356);
    market[4] = new Appliances(1000);

    bool open = true;
    while (open)
    {
        std::cout << "Выберите продукт : 1 - робот, 2 - вентилятор, 3 - персональный компьютер, 4 - некое цифровое устройство на транзиторах, 5 - печка на 1000 Вт, 0 чтобы выйти\n";
        int choice;
        std::cin >> choice;
        switch (choice)
        {
        case 1:
            market[choice-1]->ShowSpec();
            break;

        case 2:
            market[choice-1]->ShowSpec();
            break;

        case 3:
            market[choice-1]->ShowSpec();
            break;

        case 4:
            market[choice-1]->ShowSpec();
            break;

        case 5:
            market[choice-1]->ShowSpec();
            break;

        case 0:
            open = false;
            break;

        default:
            std::cout << "Выберите продукт от 1 до 5 или 0, чтобы выйти\n";
            break;
        }
    }

    std::cout << "Удаление данных из кучи\n";

    for (int i = 0; i < size; i++)
    {
        std::cout << "Deleting " << i << " element in process:\n";
        delete market[i];
        std::cout << "Deleting " << i << " element done\n\n\n";
    }

    std::cout << "The end of program\n";

    */

    /*          //Тест, чтобы вывести информацию о всех конструкторах и деструкторах, посмотреть в каком порядке они вызываются
    for (int i = 0; i < size; i++)
    {
        market[i]->ShowSpec();
    }

    std::cout << "The end of list\n\n\n";

    std::cout << "Deleting\n";

    for (int i = 0; i < size; i++)
    {
        std::cout << "Deleting " << i << " element in process:\n";
        delete market[i];
        std::cout << "Deleting " << i << " element done\n\n\n";
    }

    std::cout << "The end of program\n";
    //*/

    /*      //Каждый класс по отдельности тестировался здесь
    Robot* droid_1 = new Robot(999,23425,100);
    droid_1->ShowSpec();
    droid_1->TurnOn();
    delete droid_1;

    std::cout << "\n\n\n";

    Fan* fan = new Fan(500,3000);
    fan->ShowSpec();
    fan->TurnOn();
    delete fan;

    std::cout << "\n\n\n";

    DesktopPC* PC = new DesktopPC(1000000000,"INTEL");
    PC->ShowSpec();
    PC->TurnOn();
    PC->Reboot();
    delete PC;

    std::cout << "\n\n\n";

    Digital* processor = new Digital(2356);
    processor->ShowSpec();
    processor->TurnOn();
    delete processor;

    std::cout << "\n\n\n";

    Appliances* washing = new Appliances(1000);
    washing->ShowSpec();
    washing->TurnOn();
    delete washing;

    //Electronics one();    //нельзя создать
    //*/

    return 0;
}
