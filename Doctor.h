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
    int totalCardiacDctrs;
    int totalChildrenDctrs;
    int totalDctrs;
    string appointedAt;
    Patient Pat;

public:
    Doctor();
    Doctor(string,string,int,string,Patient);

    void setName(string);
    string getName();

    void setSpecialization(string);
    string getSpecialization();

    void setBPS(int);
    int getBPS();

    void setAppointedAt(string);
    string getAppointedAt();

    void setTotalCardiacDctrs(int);
    int getTotalCardiacDctrs();

    void setTotalChildrenDctrs(int);
    int getTotalChildrenDctrs();

    void setTotalDctrs(int);
    int getTotalDctrs();

    void displayData();
};

#endif // included_DOCTOR_H
