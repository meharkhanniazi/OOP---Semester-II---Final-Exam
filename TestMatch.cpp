#include<iostream>
#include"TestMatch.h"
using namespace std;

    TestMatch::TestMatch()
    {

    }
    TestMatch::TestMatch(int a,int b)
    {
        totalOvers = a;
        totalDays = b;
    }

    void TestMatch::setTotalOvers(int c)
    {
        totalOvers = c;
    }
    int TestMatch::getTotalOvers()
    {
        return totalOvers;
    }

    void TestMatch::setTotalDays(int d)
    {
        totalDays = d;
    }
    int TestMatch::getTotalDays()
    {
        return totalDays;
    }

    void TestMatch::displayData()
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

