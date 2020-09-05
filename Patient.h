#ifndef included_PATIENT_H
#define included_PATIENT_H
#include"Disease.h"
class Disease;
using namespace std;
class Patient
{
private:
    double patientID;
    string name;
    int age;
    Disease dis;

public:
    Patient();
    Patient(double,string,int);

    void setPatientID(double);
    double getPatientID();

    void setName(string);
    string getName();

    void setAge(int);
    int getAge();

    void displayData();
};

#endif // included_PATIENT_H
