#ifndef included_CHILDREN_H
#define included_CHILDREN_H
#include"Hospital.h"
#include"Doctor.h"
using namespace std;
class Doctor;
class ChildrenHos : public Hospital
{
private:
    string sizeOfHos;
    string ownership;
    string services;
    string treatmentType;
    int totalChildrenDctrs;
    Doctor newObj2;

public:
    ChildrenHos();
    ChildrenHos(double,string,string,string,string,string,string,Doctor);

    void setSizeOfHos(string);
    string getSizeOfHos();

    void setOwnership(string);
    string getOwnership();

    void setServices(string);
    string getServices();

    void setTreatmentType(string);
    string getTreatmentType();

    void setTotalChildrenDctrs(int);
    int getTotalChildrenDctrs();

    void displayData();
};

#endif // included_CHILDRENHOS_H


