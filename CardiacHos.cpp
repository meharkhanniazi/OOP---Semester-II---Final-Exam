#include<iostream>
#include"CardiacHos.h"
using namespace std;

    CardiacHos::CardiacHos()
    {

    }
    CardiacHos::CardiacHos(double a,string b, string c,string d,string e,string f)
    {
        hospitalRegNum = a;
        name = b;
        location = c;
        sizeOfHos = d;
        ownership = e;
        services = f;
    }

    void CardiacHos::setSizeOfHos(string d)
    {
        sizeOfHos = d;
    }
    string CardiacHos::getSizeOfHos()
    {
        return sizeOfHos;
    }

    void CardiacHos::setOwnership(string e)
    {
        ownership = e;
    }
    string CardiacHos::getOwnership()
    {
        return ownership;
    }

    void CardiacHos::setServices(string f)
    {
        services = f;
    }
    string CardiacHos::getServices()
    {
        return services;
    }

    void CardiacHos::displayData()
    {
        cout << endl << "\tHospital's Registeration No.\t" << getHospitalRegNum();
        cout << endl << "\tHospital's Name:\t\t" << getName();
        cout << endl << "\tHospital's Location: \t\t" << getLocation();
        cout << endl << "\tHospital's Size: \t\t" << getSizeOfHos();
        cout << endl << "\tHospital's Ownership:\t\t" << getOwnership();
        cout << endl << "\tHospital's Services: \t\t" << getServices() << endl;

    }
