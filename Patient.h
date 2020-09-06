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
    string appointmentTo;
    Disease dis;

public:
    Patient();
    Patient(double,string,int,string,string,string,string);

    void setPatientID(double);
    double getPatientID();

    void setName(string);
    string getName();

    void setAge(int);
    int getAge();

    void setAppointmentTo(string);
    string getAppointmentTo();

    void displayData();
};

#endif // included_PATIENT_H
