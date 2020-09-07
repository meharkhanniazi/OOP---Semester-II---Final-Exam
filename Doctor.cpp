#include<iostream>
#include"Doctor.h"
using namespace std;

    Doctor::Doctor()
    {

    }


    Doctor::Doctor(string a, string b, int c, string d, Patient e)
    {
        name = a;
        specialization = b;
        bps = c;
        appointedAt = d;
        Pat.setPatientID(e.getPatientID());
        Pat.setName(e.getName());
        Pat.setAge(e.getAge());
        Pat.setTotalPatients(e.getTotalPatients());
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

    void Doctor::setAppointedAt(string b)
    {
        appointedAt = b;
    }

    string Doctor::getAppointedAt()
    {
        return appointedAt;
    }

    void Doctor::setTotalChildrenDctrs(int a)
    {
        totalChildrenDctrs = a;
    }

    int Doctor::getTotalChildrenDctrs()
    {
        return totalChildrenDctrs;
    }


    void Doctor::setTotalCardiacDctrs(int a)
    {
        totalCardiacDctrs = a;
    }

    int Doctor::getTotalCardiacDctrs()
    {
        return totalCardiacDctrs;
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
        cout << endl << "\t\t\t\t\tBPS: \t\t\t\t" << bps;
        cout << endl << "\t\t\t\t\tTotal Patients: \t\t" << Pat.getTotalPatients();
        cout << endl << "\n\t\t\t\t\tPatient's Information:\n";
        cout << endl << "\t\t\t\t\tPatient's ID: \t\t\t" << Pat.getPatientID();
        cout << endl << "\t\t\t\t\tPatient's Name:\t\t\t" << Pat.getName();
        cout << endl << "\t\t\t\t\tPatient's Age: \t\t\t" << Pat.getAge() << endl;
    }
