#include<iostream>
#include"OneDayMatch.h"
using namespace std;

    OneDayMatch::OneDayMatch()
    {

    }
    OneDayMatch::OneDayMatch(int a,int b)
    {
        totalOvers = a;
        totalDays = b;
    }

    void OneDayMatch::setTotalOvers(int c)
    {
        totalOvers = c;
    }
    int OneDayMatch::getTotalOvers()
    {
        return totalOvers;
    }

    void OneDayMatch::setTotalDays(int d)
    {
        totalDays = d;
    }
    int OneDayMatch::getTotalDays()
    {
        return totalDays;
    }

    void OneDayMatch::displayData()
    {
        cout << endl << "\t\t\t\t\tMatch's Name:\t" << getName();
        cout << endl << "\t\t\t\t\tTeam 1:\t\t" << getOponent1();
        cout << endl << "\t\t\t\t\tTeam 2: \t\t" << getOponent2();
        cout << endl << "\t\t\t\t\tIs Tournament's Match? \t\t" << getIsTournament();
        cout << endl << "\t\t\t\t\tIs Series's Match?\t\t" << getIsSeries();
        cout << endl << "\t\t\t\t\tIs Independant Match? \t\t" << getIsIndependant();
        cout << endl << "\t\t\t\t\tTotal Overs: \t\t" << getTotalOvers();
        cout << endl << "\t\t\t\t\tTotal Days: \t\t" << getTotalDays() << endl;
    }
