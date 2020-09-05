#include<iostream>
#include"Patient.h"
using namespace std;

    Patient::Patient()
    {

    }
    Patient::Patient(double a,string b,int c)
    {
        patientID = a;
        name = b;
        age = c;
    }

    void Patient::setPatientID(double d)
    {
        patientID = d;
    }
    double Patient::getPatientID()
    {
        return patientID;
    }

    void Patient::setName(string e)
    {
        name = e;
    }
    string Patient::getName()
    {
        return name;
    }

    void Patient::setAge(int f)
    {
        age = f;
    }
    int Patient::getAge()
    {
        return age;
    }

    void Patient::displayData()
    {
        cout << endl << "\tPatient's ID: \t\t\t" << patientID;
        cout << endl << "\tPatient's Name:\t\t\t" << name;
        cout << endl << "\tPatient's Age: \t\t\t" << age << endl;
    }
