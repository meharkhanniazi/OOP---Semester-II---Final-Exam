#ifndef included_DOCTOR_H
#define included_DOCTOR_H
#include"Patient.h"
class Patient;
using namespace std;
class Doctor
{
private:
    string name;
    string specialization;
    int bps;
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

    void displayData();
};

#endif // included_DOCTOR_H
