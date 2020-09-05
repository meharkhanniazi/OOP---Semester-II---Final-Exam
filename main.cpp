#include <iostream>
#include"Doctor.h"
#include"Patient.h"
#include"Hospital.h"
#include"Disease.h"
#include"CardiacHos.h"
#include"ChildrenHos.h"
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

    CardiacHos CarHos1(4563,"National Institute of Cardiovascular Diseases (NICVD)","Karachi","Medium","Public","Thallium Scan, Angiography and Echocardiography (ECHO)");
    CardiacHos CarHos2(CarHos1);
    CarHos2.displayData();

    ChildrenHos ChlHos1(88569,"National Children Hospital","Karachi","Large","Public","Allergy, Apherisi, Audiology & Brain Treatment","Acute and Long-term Treatment");
    ChildrenHos ChlHos2 = ChlHos1;
    ChlHos2.displayData();

    return 0;
}
