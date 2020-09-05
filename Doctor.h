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
    Patient pat;

public:
    Doctor();
    Doctor(string,string,int);

    void setName(string);
    string getName();

    void setSpecialization(string);
    string getSpecialization();

    void setBPS(int);
    int getBPS();

    void setTotalDctrs(int);
    int getTotalDctrs();

    void displayData();
};

#endif // included_DOCTOR_H
