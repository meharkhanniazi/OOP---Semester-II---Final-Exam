#ifndef included_CARDIACHOS_H
#define included_CARDIACHOS_H
#include"Hospital.h"
#include"Doctor.h"
using namespace std;
class Doctor;
class CardiacHos : public Hospital
{
private:
    string sizeOfHos;
    string ownership;
    string services;
    int totalCardiacDctrs;
    Doctor newObj;

public:
    CardiacHos();
    CardiacHos(double,string,string,string,string,string,Doctor);

    void setSizeOfHos(string);
    string getSizeOfHos();

    void setOwnership(string);
    string getOwnership();

    void setServices(string);
    string getServices();

    void setTotalCardiacDctrs(int);
    int getTotalCardiacDctrs();

    void displayData();
};

#endif // included_CARDIACHOS_H

