#ifndef included_CARDIACHOS_H
#define included_CARDIACHOS_H
#include"Hospital.h"
using namespace std;
class CardiacHos : public Hospital
{
private:
    string sizeOfHos;
    string ownership;
    string services;

public:
    CardiacHos();
    CardiacHos(string,string,string);

    void setSizeOfHos(string);
    string getSizeOfHos();

    void setOwnership(string);
    string getOwnership();

    void setServices(string);
    string getServices();

    void displayData();
};

#endif // included_HOSPITAL_H

