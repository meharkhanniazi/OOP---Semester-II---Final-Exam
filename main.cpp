#include <iostream>
#include <windows.h>
#include <vector>
#include"Doctor.h"
#include"Patient.h"
#include"Hospital.h"
#include"Disease.h"
#include"CardiacHos.h"
#include"ChildrenHos.h"
using namespace std;


int main()
{
    system("mode 650");
    system("CLS");
    system("Color 5F");

    char classselection;

    cout<<endl<<endl;
    cout<<"************************************************************************************************************************";
    cout<<"************************************************************************************************************************";
    cout<<"************************************************************************************************";
    cout<<"\n\n\t\t\t\t\t\tWelcome To CSC 104 – OBJECT-ORIENTED PROGRAMMING (OOP) FINAL EXAM (SPRING 2020)"<<endl;
    cout<<"\n\n************************************************************************************************************************";
    cout<<"************************************************************************************************************************";
    cout<<"************************************************************************************************";
    cout<<endl<<endl<<endl;
    cout<<"\t\tName of Student : Mehar Khan Niazi";
    cout<<"\t\t\t\t\t\t\t\tRoll # / ID # CSC-19F-050"<<endl;
    cout<<"\t\tSection : 2B";
    cout<<"\t\t\t\t\t\t\t\t\t\t\tShift: Morning"<<endl;
    cout<<"\t\tDepartment: Computer Science";
    cout<<"\t\t\t\t\t\t\t\t\tProgram: BS (CS) (4 Years)"<<endl;
    cout<<"\t\tCourse Instructor: Mr. Zubair uddin Shaikh"<<endl;


    cout<<"\n\n\n\n\n\n\n\t\tSelect An Option to Select a Management System:"<<endl<<endl;

    cout<<"\t\t1. Hospital Management System "<<endl;
    cout<<"\t\t2. Cricket Management System"<<endl;

    cout<<endl<<endl<<"\t\tEnter the Selected Number To Continue : ";
    cin>>classselection;
    if (classselection == '1')
    {
    system("CLS");
    system("CLS");
    system("Color 2F");
    int a=0,b=0,c=0,d=0;
    vector<CardiacHos> CarHos;
    vector<ChildrenHos> ChlHos;
    vector<Doctor> Dctr;
    vector<Patient> Ptnt;
    vector<Disease> Dis;

    Disease Disease_1("Diabetes","Critical","Type 1 Diabetes");
    Dis.push_back(Disease_1);

    Disease Disease_2("Cancer","Stage II","leukemia");
    Dis.push_back(Disease_2);

    Disease Disease_3("Hepatitis C","Stage I","Hepatitis");
    Dis.push_back(Disease_2);

    Disease Disease_4(Disease_3);
    Dis.push_back(Disease_4);


    char classselection;

    cout<<endl<<endl;
    cout<<"************************************************************************************************************************";
    cout<<"************************************************************************************************************************";
    cout<<"************************************************************************************************";
    cout<<"\n\n\t\t\t\t\tWelcome To CSC 104 – OBJECT-ORIENTED PROGRAMMING (OOP) FINAL EXAM (SPRING 2020)"<<endl;
    cout<<"\n\n************************************************************************************************************************";
    cout<<"************************************************************************************************************************";
    cout<<"************************************************************************************************";
    cout<<endl;
    cout<<"************************************************************************************************************************";
    cout<<"************************************************************************************************************************";
    cout<<"************************************************************************************************";
    cout<<"\n\n\t\t\t\t\t\t\t\tHOSPITAL MANAGEMENT SYSTEM (HMS)"<<endl;
    cout<<"\n\n************************************************************************************************************************";
    cout<<"************************************************************************************************************************";
    cout<<"************************************************************************************************"<<endl;


    Patient Patient_1(874598,"Ali Khan",29);
    Ptnt.push_back(Patient_1);

    Patient Patient_2(886545,"Sameer Khan",18);
    Ptnt.push_back(Patient_2);

    Patient Patient_3(965874,"Muhammad Talha",46);
    Ptnt.push_back(Patient_3);

    Patient Patient_4(Patient_3);
    Ptnt.push_back(Patient_4);

    cout<<"\n\n\t\t\t\t\t\t\t\t\t    Patient's Data"<<endl<<endl;
    cout<<"\t\t\t\t***************************************************************************************************\n\n";
    cout<<"\n\n\t\t\t\t\tNumber of Registered Patients : "<<Ptnt.size() << endl << endl;
    a = Ptnt.size();
    for(unsigned int i = 0; i < a; i++)
    {
        cout<<"\n\t\t\t\t\tDoctor # "<<i+1<<endl;
        Ptnt[i].displayData();
    }

    cout<<"\n\t\t\t\t\tPatient # "<<a<<" 's data is same as Patient # "<<a-1<<" due to copy constructor.\n\n";





    Doctor Dctr_1("Dr. Muhammad Adnan","Surgical Doctor",19);
    Dctr.push_back(Dctr_1);

    Doctor Dctr_2("Dr. Shahab Khan","Medical Doctor",18);
    Dctr.push_back(Dctr_2);
    Doctor Dctr_3(Dctr_2);
    Dctr.push_back(Dctr_3);

    cout<<"\n\n\t\t\t\t\t\t\t\t\t    Doctor's Data"<<endl<<endl;
    cout<<"\t\t\t\t***************************************************************************************************\n\n";
    cout<<"\n\n\t\t\t\t\tNumber of Registered Doctors : "<<Dctr.size() << endl << endl;
    b = Dctr.size();
    Doctor Dctr_Obj;
    Dctr_Obj.setTotalDctrs(b);
    for(unsigned int i = 0; i < b; i++)
    {
        cout<<"\n\t\t\t\t\tDoctor # "<<i+1<<endl;
        Dctr[i].displayData();
    }

    cout<<"\n\t\t\t\t\tDoctor # "<<b<<" 's data is same as Doctor # "<<b-1<<" due to copy constructor.\n\n";




    CardiacHos CardiacHospital_1(4563,"National Institute of Cardiovascular Diseases (NICVD)","Karachi","Medium","Public","Thallium Scan, Angiography and Echocardiography (ECHO)",b);
    CarHos.push_back(CardiacHospital_1);
    CardiacHos CardiacHospital_2(CardiacHospital_1);
    CarHos.push_back(CardiacHospital_2);

    cout<<"\n\n\t\t\t\t\t\t\t\t    Cardiac Hospital's Data"<<endl<<endl;
    cout<<"\t\t\t\t***************************************************************************************************\n\n";
    cout<<"\n\n\t\t\t\t\tNumber of Registered Hospitals : "<<CarHos.size() << endl << endl;
    c = CarHos.size();
    for(unsigned int i = 0; i < c; i++)
    {
        cout<<"\n\t\t\t\t\tHospital # "<<i+1<<endl;
        CarHos[i].displayData();
    }
    cout<<"\n\t\t\t\t\tHospital # "<<c<<" 's data is same as Hospital # "<<c-1<<" due to copy constructor.\n\n";

    ChildrenHos ChildrenHospital_1(88569,"National Children Hospital","Karachi","Large","Public","Allergy, Apherisi, Audiology & Brain Treatment","Acute and Long-term Treatment" );
    ChlHos.push_back(ChildrenHospital_1);
    ChildrenHos ChildrenHospital_2(ChildrenHospital_1);
    ChlHos.push_back(ChildrenHospital_2);

    cout<<"\n\n\t\t\t\t\t\t\t\t    Children Hospital's Data"<<endl<<endl;
    cout<<"\t\t\t\t***************************************************************************************************\n\n";
    cout<<"\n\n\t\t\t\t\tNumber of Registered Hospitals : "<<ChlHos.size() << endl << endl;
    d = ChlHos.size();
    for(unsigned int i = 0; i < d; i++)
    {
        cout<<"\n\t\t\t\t\tHospital # "<<i+1<<endl;
        ChlHos[i].displayData();
    }
    cout<<"\n\t\t\t\t\tHospital # "<<d<<" 's data is same as Hospital # "<<d-1<<" due to copy constructor.\n\n";

    }


    else if (classselection == '2')
    {
        system("CLS");
        //cricketManagementSystem();


    }
    else
    {
        cout << endl << "\t\tYou have pressed a wrong key!\n\n\n";

    }


   /* Doctor Dctr1("Dr. Muhammad Adnan","Surgical Doctor",19);
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
    ChlHos2.displayData();*/

    return 0;
}
