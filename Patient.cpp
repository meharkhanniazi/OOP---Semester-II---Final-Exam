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
        cout << endl << "\t\t\t\t\tPatient's ID: \t\t\t" << patientID;
        cout << endl << "\t\t\t\t\tPatient's Name:\t\t\t" << name;
        cout << endl << "\t\t\t\t\tPatient's Age: \t\t\t" << age;
        cout << endl << "\t\t\t\t\tPatients' Disease: \t\t\t" << dis.getName();
        cout << endl << "\t\t\t\t\tDisease Level/Stage: \t\t\t" << dis.getLevel();
        cout << endl << "\t\t\t\t\tDisease Category: \t\t\t" << dis.getCategory();
    }
