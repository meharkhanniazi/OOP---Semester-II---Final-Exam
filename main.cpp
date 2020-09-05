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

void mainloop();
void hospitalManagementSystem();
void hospitalSection();
void hospitalData(vector<Hospital>&);

int main()
{
    system("mode 650");
    //mainloop();
    vector<Hospital> Hos;
    Hospital Hsptl1(748596,"Karachi Public Hospital","Saudabad Karachi");
    Hospital Hsptl2 = Hsptl1;
    Hos.push_back(Hsptl1);
    int NumOfObj = Hos.size();
    for(int i = 0; i < NumOfObj; i++)
    {
        Hos[i].displayData();
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

void mainloop()
{
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
        hospitalManagementSystem();

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
}

void hospitalManagementSystem()
{
    system("CLS");
    system("Color 2F");
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


    cout<<"\n\n\n\t\t\tSelect An Option to Continue:"<<endl<<endl;

    cout<<"\t\t\t1. Hospital Section "<<endl;
    cout<<"\t\t\t2. Doctor Section"<<endl;
    cout<<"\t\t\t3. Patient Section"<<endl;
    cout<<"\t\t\t4. Exit";

    cout<<endl<<endl<<"\t\t\tEnter the Selected Number To Continue : ";
    cin>>classselection;
    if (classselection == '1')
    {
        system("CLS");
        hospitalSection();
    }
    else if (classselection == '2')
    {
        system("CLS");

    }
    else if (classselection == '3' )
    {
        system("CLS");

    }
     else if (classselection == '4' )
    {
        cout << "\n\n\t\t\tThank you so much for using Hospital Management System (HMS)." << endl << endl;
    }

}

void hospitalSection()
{
    system("CLS");
    system("Color 2F");
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
    cout<<"\n\n\t\t\t\t\t\t\t\t\tHOSPITAL SECTION"<<endl;
    cout<<"\n\n************************************************************************************************************************";
    cout<<"************************************************************************************************************************";
    cout<<"************************************************************************************************"<<endl;


    cout<<"\n\n\n\t\t\tSelect An Option to Continue:"<<endl<<endl;

    cout<<"\t\t\t1. Hospital's Data "<<endl;
    cout<<"\t\t\t2. No. of Registered Doctors"<<endl;
    cout<<"\t\t\t3. No. of Registered Patients"<<endl;
    cout<<"\t\t\t4. Cardiac Hospital"<<endl;
    cout<<"\t\t\t5. Children Hospital"<<endl;
    cout<<"\t\t\t6. Back"<<endl;
    cout<<"\t\t\t7. Exit";

    cout<<endl<<endl<<"\t\t\tEnter the Selected Number To Continue : ";
    cin>>classselection;
    if (classselection == '1')
    {
        system("CLS");
    //    hospitalData();
    }
    else if (classselection == '2')
    {
        system("CLS");

    }
    else if (classselection == '3' )
    {
        system("CLS");

    }
     else if (classselection == '4' )
    {
        cout << "\n\n\t\t\tThank you so much for using Hospital Management System (HMS)." << endl << endl;
    }

}

void hospitalData(vector<Hospital>& Hos)
{
    system("CLS");
    system("Color 2F");
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
    cout<<"\n\n\t\t\t\t\t\t\t\t\tHOSPITAL'S DATA"<<endl;
    cout<<"\n\n************************************************************************************************************************";
    cout<<"************************************************************************************************************************";
    cout<<"************************************************************************************************"<<endl;

    Hospital Hsptl1(748596,"Karachi Public Hospital","Saudabad Karachi");
    Hospital Hsptl2 = Hsptl1;
    Hos.push_back(Hsptl1);
    int NumOfObj = Hos.size();
    for(int i = 0; i < NumOfObj; i++)
    {
        Hos[i].displayData();
    }

    cout<<"\n\t\t\t\t=============================================================================================="<<endl;
    cout<<"\n\n\n\t\t\t\t\tSelect An Option to Continue:"<<endl<<endl;

    cout<<"\t\t\t\t\t1. Back"<<endl;
    cout<<"\t\t\t\t\t2. Home Page"<<endl;
    cout<<"\t\t\t\t\t3. Exit"<<endl;

    cout<<endl<<endl<<"\t\t\t\t\tEnter the Selected Number To Continue : ";
    cin>>classselection;
    if (classselection == '1')
    {
        system("CLS");
        hospitalSection();
    }
    else if (classselection == '2')
    {
        system("CLS");
        hospitalManagementSystem();

    }
    else if (classselection == '3' )
    {
        cout<<endl<<"\t\t\t\t\tThank you for using Hospital Management System (HMS).\n\n\n";
    }

}


