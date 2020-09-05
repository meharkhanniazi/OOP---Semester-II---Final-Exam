#include<iostream>
#include"CardiacHos.h"
using namespace std;

    CardiacHos::CardiacHos()
    {

    }
    CardiacHos::CardiacHos(double a,string b, string c,string d,string e,string f, int g)
    {
        //Doctor newObj1;
        hospitalRegNum = a;
        name = b;
        location = c;
        sizeOfHos = d;
        ownership = e;
        services = f;
        newObj.totalDctrs = g;
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
        cout << endl << "\t\t\t\t\tHospital's Registeration No.\t" << getHospitalRegNum();
        cout << endl << "\t\t\t\t\tHospital's Name:\t\t" << getName();
        cout << endl << "\t\t\t\t\tHospital's Location: \t\t" << getLocation();
        cout << endl << "\t\t\t\t\tHospital's Size: \t\t" << getSizeOfHos();
        cout << endl << "\t\t\t\t\tHospital's Ownership:\t\t" << getOwnership();
        cout << endl << "\t\t\t\t\tHospital's Services: \t\t" << getServices();
        cout << endl << "\t\t\t\t\tTotal Doctors: \t\t\t" << newObj.getTotalDctrs() << endl;

    }
