#include <iostream>
#include"Doctor.h"
#include"Patient.h"
#include"Hospital.h"
#include"Disease.h"
using namespace std;

int main()
{
    Doctor Dctr1("Dr. Muhammad Adnan","Surgical Doctor",19);
    Doctor Dctr2(Dctr1);
    Dctr2.displayData();

    Patient Ptnt1(874598,"Ali Khan",29);
    Patient Ptnt2(Ptnt1);
    Ptnt2.displayData();

    Hospital Hsptl1(748596,"Karachi Public Hospital","Saudabad Karachi");
    Hospital Hsptl2 = Hsptl1;
    Hsptl2.displayData();

    Disease Dis1("Diabetes","Critical","Type 1 Diabetes");
    Disease Dis2 = Dis1;
    Dis2.displayData();

    return 0;
}
