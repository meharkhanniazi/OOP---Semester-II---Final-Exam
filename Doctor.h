#ifndef included_DOCTOR_H
#define included_DOCTOR_H
#include"Patient.h"
class Patient;
using namespace std;
class Doctor
{
public:
    string name;
    string specialization;
    int bps;
    int totalDctrs;
    string appointedAt;
    int totalPatients;
    Patient pat;

public:
    Doctor();
    Doctor(string,string,int,string);

    void setName(string);
    string getName();

    void setSpecialization(string);
    string getSpecialization();

    void setBPS(int);
    int getBPS();

    void setTotalDctrs(int);
    int getTotalDctrs();

    void setAppointedAt(string);
    string getAppointedAt();

    void setTotalPatients(int);
    int getTotalPatients();


    void displayData();
};

#endif // included_DOCTOR_H
