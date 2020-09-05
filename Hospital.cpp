#include<iostream>
#include"Hospital.h"
using namespace std;

    Hospital::Hospital()
    {

    }
    Hospital::Hospital(double a,string b,string c)
    {
        hospitalRegNum = a;
        name = b;
        location = c;
    }

    void Hospital::setHospitalRegNum(double d)
    {
        hospitalRegNum = d;
    }
    double Hospital::getHospitalRegNum()
    {
        return hospitalRegNum;
    }

    void Hospital::setName(string e)
    {
        name = e;
    }
    string Hospital::getName()
    {
        return name;
    }

    void Hospital::setLocation(string f)
    {
        location = f;
    }
    string Hospital::getLocation()
    {
        return location;
    }

    void Hospital::displayData()
    {
        cout << endl << "\tHospital's Registeration No.\t" << hospitalRegNum;
        cout << endl << "\tHospital's Name:\t\t" << name;
        cout << endl << "\tHospital's Location: \t\t" << location << endl;
    }
