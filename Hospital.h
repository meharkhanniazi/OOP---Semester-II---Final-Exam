#ifndef included_HOSPITAL_H
#define included_HOSPITAL_H
#include"Doctor.h"
class Doctor;
using namespace std;
class Hospital
{
protected:
    double hospitalRegNum;
    string name;
    string location;
    Doctor doc;

public:
    Hospital();
    Hospital(double,string,string);

    void setHospitalRegNum(double);
    double getHospitalRegNum();

    void setName(string);
    string getName();

    void setLocation(string);
    string getLocation();

    void displayData();
};

#endif // included_HOSPITAL_H
