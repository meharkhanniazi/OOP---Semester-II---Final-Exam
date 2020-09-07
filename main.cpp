#include <iostream>
#include <windows.h>
#include <vector>
#include"Doctor.h"
#include"Patient.h"
#include"Hospital.h"
#include"Disease.h"
#include"CardiacHos.h"
#include"ChildrenHos.h"
#include"Team.h"
#include"Match.h"
#include"Venue.h"
#include"Player.h"
#include"OneDayMatch.h"
#include"T20Match.h"
#include"TestMatch.h"
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
    int cardiacHosDoctors = 0;
    int childrenHosDoctors = 0;
    int cardiacPatient = 0;
    int childrenPatient = 0;

    vector<CardiacHos> CarHos;
    vector<ChildrenHos> ChlHos;
    vector<Doctor> Dctr;
    vector<Patient> Ptnt;
    vector<Disease> Dis;
    vector<Hospital> Hos;

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


    Patient Patient_1(874598,"Ali Khan",29,Disease_1,"Dr. Muhammad Adnan");
    Ptnt.push_back(Patient_1);

    Patient Patient_2(886545,"Sameer Khan",18,Disease_2,"Dr. Shahab Khan");
    Ptnt.push_back(Patient_2);

    Patient Patient_3(965874,"Muhammad Talha",46,Disease_3,"Dr. Shahab Khan");
    Ptnt.push_back(Patient_3);

    Patient Patient_4(Patient_3);
    Ptnt.push_back(Patient_4);

    cout<<"\n\n\t\t\t\t\t\t\t\t\t    Patient's Data"<<endl<<endl;
    cout<<"\t\t\t\t***************************************************************************************************\n\n";
    cout<<"\n\n\t\t\t\t\tNumber of Registered Patients : "<<Ptnt.size() << endl << endl;
    a = Ptnt.size();
    for(unsigned int i = 0; i < a; i++)
    {
        cout<<"\n\t\t\t\t\tPatient # "<<i+1<<endl;
        Ptnt[i].displayData();
    }

    cout<<"\n\t\t\t\t\tPatient # "<<a<<" 's data is same as Patient # "<<a-1<<" due to copy constructor.\n\n";

    for(unsigned int s = 0; s < 3; s++)
    {
        if(Ptnt[s].getAppointmentTo() == "Dr. Muhammad Adnan")
        {
            cardiacPatient++;
        }
        else if(Ptnt[s].getAppointmentTo() == "Dr. Shahab Khan")
        {
            childrenPatient++;

        }
    }

    Patient_1.setTotalPatients(cardiacPatient);
    Patient_2.setTotalPatients(childrenPatient);
    Patient_3.setTotalPatients(childrenPatient);

      Doctor Dctr_1("Dr. Muhammad Adnan","Surgical Doctor",19,"National Institute of Cardiovascular Diseases (NICVD)",Patient_1);
      Dctr.push_back(Dctr_1);

      Doctor Dctr_2("Dr. Shahab Khan","Medical Doctor",18,"National Children Hospital",Patient_2);
      Dctr.push_back(Dctr_2);
      Doctor Dctr_3(Dctr_2);
      Dctr.push_back(Dctr_3);

      b = Dctr.size();





    cout<<"\n\n\t\t\t\t\t\t\t\t\t    Doctor's Data"<<endl<<endl;
    cout<<"\t\t\t\t***************************************************************************************************\n\n";
    cout<<"\n\n\t\t\t\t\tNumber of Registered Doctors : "<<Dctr.size() << endl << endl;

    Doctor Dctr_Obj;
    Dctr_Obj.setTotalDctrs(b);
    for(unsigned int i = 0; i < b; i++)
    {
        cout<<"\n\t\t\t\t\tDoctor # "<<i+1<<endl;
        Dctr[i].displayData();
    }

    cout<<"\n\t\t\t\t\tDoctor # "<<b<<" 's data is same as Doctor # "<<b-1<<" due to copy constructor.\n\n";



    for(int s = 0; s < b; s++)
    {
        if(Dctr[s].getAppointedAt() == "National Institute of Cardiovascular Diseases (NICVD)")
        {
            cardiacHosDoctors++;
        }
        else if(Dctr[s].getAppointedAt() == "National Children Hospital")
        {
            childrenHosDoctors++;
        }
    }

    Doctor CardiacObj;
    CardiacObj.setTotalCardiacDctrs(cardiacHosDoctors);

    Doctor ChildrenObj;
    ChildrenObj.setTotalChildrenDctrs(childrenHosDoctors);


    CardiacHos CardiacHospital_1(4563,"National Institute of Cardiovascular Diseases (NICVD)","Karachi","Medium","Public","Thallium Scan, Angiography and Echocardiography (ECHO)",CardiacObj);
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

    ChildrenHos ChildrenHospital_1(88569,"National Children Hospital","Karachi","Large","Public","Allergy, Apherisi, Audiology & Brain Treatment","Acute and Long-term Treatment",ChildrenObj);
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
    system("Color 4F");

    int a=0,b=0,c=0,d=0;

    vector<Team> Tm;
    vector<Match> Mtch;
    vector<Venue> Vnu;
    vector<Player> Plyr;
    vector<OneDayMatch> OneDay;
    vector<T20Match> T20;
    vector<TestMatch> Test;

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
    cout<<"\n\n\t\t\t\t\t\t\t\tCRICKET MANAGEMENT SYSTEM (CMS)"<<endl;
    cout<<"\n\n************************************************************************************************************************";
    cout<<"************************************************************************************************************************";
    cout<<"************************************************************************************************"<<endl;


    Venue Venue_1("National Stadium","Karachi, Pakistan",25000,352);
    Vnu.push_back(Venue_1);

    Venue Venue_2("Gaddafi Stadium","Lahore, Pakistan",35000,518);
    Vnu.push_back(Venue_2);

    Venue Venue_3(Venue_2);
    Vnu.push_back(Venue_3);


    cout<<"\n\n\t\t\t\t\t\t\t\t\t    Venue's Data"<<endl<<endl;
    cout<<"\t\t\t\t***************************************************************************************************\n\n";
    cout<<"\n\n\t\t\t\t\tNumber of Registered Venues : "<<Vnu.size() << endl << endl;
    a = Vnu.size();
    for(unsigned int i = 0; i < a; i++)
    {
        cout<<"\n\t\t\t\t\tVenue # "<<i+1<<endl;
        Vnu[i].displayData();
    }

    cout<<"\n\t\t\t\t\tVenue # "<<a<<" 's data is same as Venue # "<<a-1<<" due to copy constructor.\n\n";




    Match Match_1("One Day International","Pakistan","India",false,true,false,Venue_1);
    Mtch.push_back(Match_1);

    Match Match_2("T20 International","England","West Indies",false,true,false,Venue_2);
    Mtch.push_back(Match_2);

    Match Match_3("International Test Match","Australia","Sri Lanka",true,false,false,Venue_3);
    Mtch.push_back(Match_3);

    Match Match_4(Match_3);
    Mtch.push_back(Match_4);


    cout<<"\n\n\t\t\t\t\t\t\t\t\t    Matches' Data"<<endl<<endl;
    cout<<"\t\t\t\t***************************************************************************************************\n\n";
    cout<<"\n\n\t\t\t\t\tNumber of Scheduled Matches : "<<Mtch.size() << endl << endl;
    b = Mtch.size();
    for(unsigned int i = 0; i < b; i++)
    {
        cout<<"\n\t\t\t\t\tMatch # "<<i+1<<endl;
        Mtch[i].displayData();
    }

    cout<<"\n\t\t\t\t\tMatch # "<<b<<" 's data is same as Match # "<<b-1<<" due to copy constructor.\n\n";



    Team Team_1("Pakistan Cricket Team","6th","Pakistan",3541,2015,1444,50,32,Match_1);
    Tm.push_back(Team_1);

    Team Team_2("England Cricket Team","3rd","England",5215,3654,1252,154,155,Match_2);
    Tm.push_back(Team_2);

    Team Team_3("Australian Cricket Team","1st","Australia",4951,3266,1423,200,62,Match_3);
    Tm.push_back(Team_3);

    Team Team_4(Team_3);


    cout<<"\n\n\t\t\t\t\t\t\t\t\t    Teams' Data"<<endl<<endl;
    cout<<"\t\t\t\t***************************************************************************************************\n\n";
    cout<<"\n\n\t\t\t\t\tNumber of Registered Teams : "<<Tm.size() << endl << endl;
    c = Tm.size();
    for(unsigned int i = 0; i < c; i++)
    {
        cout<<"\n\t\t\t\t\tTeam # "<<i+1<<endl;
        Tm[i].displayData();
    }

    cout<<"\n\t\t\t\t\tTeam # "<<c<<" 's data is same as Team # "<<c-1<<" due to copy constructor.\n\n";




    Player Player_1("Babar Ali","Pakistani","Pakistan Cricket Team",141,"Batsman","9th",Team_1);
    Plyr.push_back(Player_1);

    Player Player_2("Taimoor Hussain","Pakistani","England Cricket Team",15,"Bowler","158th",Team_2);
    Plyr.push_back(Player_2);

    Player Player_3("Salman Ali","Pakistani","Australian Cricket Team",81,"Batsman","55th",Team_3);
    Plyr.push_back(Player_3);

    Player Player_4(Player_3);
    Plyr.push_back(Player_4);

    cout<<"\n\n\t\t\t\t\t\t\t\t\t    Players' Data"<<endl<<endl;
    cout<<"\t\t\t\t***************************************************************************************************\n\n";
    cout<<"\n\n\t\t\t\t\tNumber of Registered Players : "<<Plyr.size() << endl << endl;
    d = Plyr.size();
    for(unsigned int i = 0; i < d; i++)
    {
        cout<<"\n\t\t\t\t\tPlayer # "<<i+1<<endl;
        Plyr[i].displayData();
    }

    cout<<"\n\t\t\t\t\tPlayer # "<<d<<" 's data is same as Player # "<<d-1<<" due to copy constructor.\n\n";


    }
    else
    {
        cout << endl << "\t\tYou have pressed a wrong key!\n\n\n";

    }

    return 0;
}
