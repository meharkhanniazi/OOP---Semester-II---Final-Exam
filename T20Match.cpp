#include<iostream>
#include"T20Match.h"
using namespace std;

    T20Match::T20Match()
    {

    }
    T20Match::T20Match(int a,int b,string c)
    {
        totalOvers = a;
        totalDays = b;
        dayNight = c;
    }

    void T20Match::setTotalOvers(int c)
    {
        totalOvers = c;
    }
    int T20Match::getTotalOvers()
    {
        return totalOvers;
    }

    void T20Match::setTotalDays(int d)
    {
        totalDays = d;
    }
    int T20Match::getTotalDays()
    {
        return totalDays;
    }

    void T20Match::setDayNight(string e)
    {
        dayNight = e;
    }

    string T20Match::getDayNight()
    {
        return dayNight;
    }

    void T20Match::displayData()
    {
        cout << endl << "\t\t\t\t\tMatch's Name:\t" << getName();
        cout << endl << "\t\t\t\t\tTeam 1:\t\t" << getOponent1();
        cout << endl << "\t\t\t\t\tTeam 2: \t\t" << getOponent2();
        cout << endl << "\t\t\t\t\tIs Tournament's Match? \t\t" << getIsTournament();
        cout << endl << "\t\t\t\t\tIs Series's Match?\t\t" << getIsSeries();
        cout << endl << "\t\t\t\t\tIs Independant Match? \t\t" << getIsIndependant();
        cout << endl << "\t\t\t\t\tTotal Overs: \t\t" << getTotalOvers();
        cout << endl << "\t\t\t\t\tTotal Days: \t\t" << getTotalDays();
        cout << endl << "\t\t\t\t\tDay / Night: \t\t" << getDayNight() << endl;
    }

