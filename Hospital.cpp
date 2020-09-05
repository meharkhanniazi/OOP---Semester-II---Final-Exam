#include<iostream>
#include"Hospital.h"
using namespace std;

    Hospital::Hospital()
    {

    }
    Hospital::Hospital(double a,string b,string c, Doctor &d)
    {
        hospitalRegNum = a;
        name = b;
        location = c;
        totalDoctors = d.totalDctrs;
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
        cout << endl << "\t\t\t\t\tHospital's Registeration No.\t\t\t\t" << hospitalRegNum;
        cout << endl << "\t\t\t\t\tHospital's Name:\t\t\t\t\t" << name;
        cout << endl << "\t\t\t\t\tHospital's Location: \t\t\t\t\t" << location;
        cout << endl << "\t\t\t\t\tTotal Doctors: \t\t\t\t\t\t" << totalDoctors << endl;
    }
