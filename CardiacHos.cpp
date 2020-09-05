#include<iostream>
#include"CardiacHos.h"
using namespace std;

    CardiacHos::CardiacHos()
    {

    }
    CardiacHos::CardiacHos(string a,string b,string c)
    {
        sizeOfHos = a;
        ownership = b;
        services = c;
    }

    void CardiacHos::setSizeOfHos(string d)
    {
        sizeOfHos = d;
    }
    string CardiacHos::getSizeOfHos()
    {
        return sizeOfHos;
    }

    void CardiacHos::setOwnership(string);
    string CardiacHos::getOwnership();

    void CardiacHos::setServices(string);
    string CardiacHos::getServices();

    void CardiacHos::displayData();
