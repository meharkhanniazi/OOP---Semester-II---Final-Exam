#include<iostream>
#include"Doctor.h"
using namespace std;

    Doctor::Doctor()
    {

    }
    Doctor::Doctor(string a, string b, int c)
    {
        name = a;
        specialization = b;
        bps = c;
    }

    void Doctor::setName(string d)
    {
        name = d;
    }
    string Doctor::getName()
    {
        return name;
    }

    void Doctor::setSpecialization(string e)
    {
        specialization = e;
    }
    string Doctor::getSpecialization()
    {
        return specialization;
    }

    void Doctor::setBPS(int f)
    {
        bps = f;
    }
    int Doctor::getBPS()
    {
        return bps;
    }

    void Doctor::setTotalDctrs(int a)
    {
        totalDctrs = a;
    }

    int Doctor::getTotalDctrs()
    {
        return totalDctrs;
    }

    void Doctor::displayData()
    {
        cout << endl << "\t\t\t\t\tDoctor's Name: \t\t\t" << name;
        cout << endl << "\t\t\t\t\tDoctor's Specialization:\t" << specialization;
        cout << endl << "\t\t\t\t\tBPS: \t\t\t\t" << bps << endl;
    }
