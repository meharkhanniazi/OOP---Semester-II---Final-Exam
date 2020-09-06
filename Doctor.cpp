#include<iostream>
#include"Doctor.h"
using namespace std;

    Doctor::Doctor()
    {

    }


    Doctor::Doctor(string a, string b, int c, string d)
    {
        name = a;
        specialization = b;
        bps = c;
        appointedAt = d;

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

    void Doctor::setAppointedAt(string b)
    {
        appointedAt = b;
    }

    string Doctor::getAppointedAt()
    {
        return appointedAt;
    }

    void Doctor::setTotalPatients(int a)
    {
        totalPatients = a;
    }

    int Doctor::getTotalPatients()
    {
        return totalPatients;
    }





    void Doctor::displayData()
    {
        cout << endl << "\t\t\t\t\tDoctor's Name: \t\t\t" << name;
        cout << endl << "\t\t\t\t\tDoctor's Specialization:\t" << specialization;
        cout << endl << "\t\t\t\t\tBPS: \t\t\t\t" << bps;
        cout << endl << "\t\t\t\t\tTotal Patients: \t\t\t" << Doctor::totalPatients << endl;
    }
