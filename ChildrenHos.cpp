#include<iostream>
#include"ChildrenHos.h"
using namespace std;

    ChildrenHos::ChildrenHos()
    {

    }
    ChildrenHos::ChildrenHos(double a,string b, string c,string d,string e,string f, string g)
    {
        hospitalRegNum = a;
        name = b;
        location = c;
        sizeOfHos = d;
        ownership = e;
        services = f;
        treatmentType = g;
    }

    void ChildrenHos::setSizeOfHos(string d)
    {
        sizeOfHos = d;
    }
    string ChildrenHos::getSizeOfHos()
    {
        return sizeOfHos;
    }

    void ChildrenHos::setOwnership(string e)
    {
        ownership = e;
    }
    string ChildrenHos::getOwnership()
    {
        return ownership;
    }

    void ChildrenHos::setServices(string f)
    {
        services = f;
    }
    string ChildrenHos::getServices()
    {
        return services;
    }

    void ChildrenHos::setTreatmentType(string g)
    {
        treatmentType = g;
    }
    string ChildrenHos::getTreatmentType()
    {
        return treatmentType;
    }

    void ChildrenHos::displayData()
    {
        cout << endl << "\t\t\t\t\tHospital's Registeration No.\t" << getHospitalRegNum();
        cout << endl << "\t\t\t\t\tHospital's Name:\t\t" << getName();
        cout << endl << "\t\t\t\t\tHospital's Location: \t\t" << getLocation();
        cout << endl << "\t\t\t\t\tHospital's Size: \t\t" << getSizeOfHos();
        cout << endl << "\t\t\t\t\tHospital's Ownership:\t\t" << getOwnership();
        cout << endl << "\t\t\t\t\tHospital's Services: \t\t" << getServices();
        cout << endl << "\t\t\t\t\tHospital's Treatment Type: \t" << getTreatmentType() << endl;
    }

